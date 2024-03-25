fn main() {
    // 59A - Word
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let s = s.trim();
    let mut upper = 0;
    let mut lower = 0;
    for c in s.chars() {
        if c.is_uppercase() {
            upper += 1;
        } else {
            lower += 1;
        }
    }
    if upper > lower {
        println!("{}", s.to_uppercase());
    } else {
        println!("{}", s.to_lowercase());
    }
}
