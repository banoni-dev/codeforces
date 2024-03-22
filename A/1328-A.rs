fn main() {
    // 1328-A divisibility problem
    let mut t = String::new();
    std::io::stdin().read_line(&mut t).unwrap();
    let t: i32 = t.trim().parse().unwrap();
    for _ in 0..t {
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).unwrap();
        let input: Vec<i32> = input
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        let a = input[0];
        let b = input[1];
        if a % b == 0 {
            println!("0");
        } else {
            println!("{}", b - a % b);
        }
    }

}
