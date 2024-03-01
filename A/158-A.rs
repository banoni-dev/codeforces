fn main() {


    // 158-A solution
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let input: Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let n = input[0] as usize;
    let k = input[1] as usize;
    let mut arr = Vec::new();
    let mut count = 0;
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let input: Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    for i in 0..n {
        arr.push(input[i]);
    }
    for i in 0..n {
        if arr[i] >= arr[k - 1] && arr[i] > 0 {
            count += 1;
        }
    }
    
    println!("{}", count);
}
