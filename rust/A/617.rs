fn main() {
    // 617-A - Elephant
    let mut steps: i64;
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i64 = n.trim().parse().unwrap();
    steps = n / 5;
    steps += if n % 5 == 0 { 0 } else { 1 };
    println!("{}", steps);
}
