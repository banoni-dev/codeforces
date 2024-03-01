fn main() {
    // 282-A
    let mut x = 0;
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    for _ in 0..n.trim().parse().unwrap() {
        let mut s = String::new();
        std::io::stdin().read_line(&mut s).unwrap();
        if s.contains("++") {
            x += 1;
        } else if s.contains("--") {
            x -= 1;
        }
    }
    println!("{}", x);
}
