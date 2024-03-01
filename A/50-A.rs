fn main() {
    // 50-A.rs
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input = input.split_whitespace();
    let m: u32 = input.next().unwrap().parse().unwrap();
    let n: u32 = input.next().unwrap().parse().unwrap();
    println!("{}", m * n / 2);
}
