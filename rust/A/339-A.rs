fn main() {
    // 339-A (Helpful Maths)
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let mut s: Vec<&str> = s.trim().split('+').collect();
    s.sort();
    println!("{}", s.join("+"));
}
