fn main() {
    // 467-A - George and Accommodation
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut count = 0;
    for _ in 0..n {
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).unwrap();
        let input: Vec<i32> = input
            .split_whitespace()
            .map(|s| s.parse().unwrap())
            .collect();
        if input[1] - input[0] >= 2 {
            count += 1;
        }
    }
    println!("{}", count);
}
