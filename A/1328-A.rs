fn main() {
    // 1328-A solution
    let mut t = String::new();
    std::io::stdin().read_line(&mut t).unwrap();
    let t: i32 = t.trim().parse().unwrap();
    for _ in 0..t {
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).unwrap();
        let mut input = input.trim().split_whitespace();
        let a: i32 = input.next().unwrap().parse().unwrap();
        let b: i32 = input.next().unwrap().parse().unwrap();
        let mut res = 0;
        if a % b == 0 {
            println!("0");
        } else {
            res = b - a % b;
            println!("{}", res);
        }
    }
}
