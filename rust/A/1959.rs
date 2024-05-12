


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
    let n = take_int();
    let t = take_vector();
    let mut x = t[0];
    for i in 1..n-1 {
        x = t[i-1];
        if t[i] != x {
            if t[i+1] != t[0] {
                println!("{}", i);
                return;
            }
            else {
                println!("{}", i+1);
                return;
            }
        }
    }
    println!("{}", n);
}












pub fn main() {
    let t = take_int();
    for _ in 0..t { solve(); }
}



