fn main() {
    // 486-A - Calculating Function
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i64 = n.trim().parse().unwrap();
    let mut result: i64 = 0;
    if n % 2 == 0 {
        result = n / 2;
    } else {
        result = -((n + 1) / 2);
    }
    println!("{}", result);
}
