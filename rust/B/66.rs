


#![allow(unused)]

use std::io::stdin;

fn take_int() -> usize {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    return input.trim().parse().unwrap();
}

fn take_vector() -> Vec<usize> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let arr: Vec<usize> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
    return arr;
}

fn take_string() -> Vec<char> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let vec: Vec<char> = input.trim().chars().collect();
    return vec;
}

fn to_string(vec: Vec<char>) -> String { return vec.iter().collect::<String>(); }












fn solve() {
    let sz = take_int();
    let arr = take_vector();
    let mut max = 0;
    for i in 0..sz {
        let mut count = 1;
        if i == 0 {
            count += 1;
            for j in 1..sz {
                if arr[j-1] >= arr[j] {
                    count += 1;
                }else {
                    break;
                }
            }
        }else if i == sz-1 {
            for j in (0..sz-1).rev() {
                if arr[j] <= arr[j+1] {
                    count += 1;
                }else {
                    break;
                }
            }
        }else {
            for j in 0..i {
                if arr[j] >= arr[j+1] {
                    count += 1;
                }else {
                    break;
                }
            }
            for j in (i..sz-1) {
                println!("j = {}, arr {}", j, arr[j]);
                if arr[j] >= arr[j+1] {
                    count += 1;
                }else {
                    break;
                }
            }
        }
        max = max.max(count);
        println!("max = {}, count = {}, fun = {}", max, count, max.max(count));
    }
    println!("{}", max);
    

}









pub fn main() {
    let t = 1;
    for _ in 0..t { solve(); }
}



