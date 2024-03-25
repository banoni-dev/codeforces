fn main() {
    // 41-A ( Translation )
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let s = s.trim();
    let mut t = String::new();
    std::io::stdin().read_line(&mut t).unwrap();
    let t = t.trim();
    let mut t = t.chars().collect::<Vec<char>>();
    t.reverse();
    if s == t.iter().collect::<String>() {
        println!("YES");
    } else {
        println!("NO");
    }

}
