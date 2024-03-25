fn main() {
    // 344-A - Magnets
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut count = 1;
    let mut last = String::new();
    for _ in 0..n {
        let mut s = String::new();
        std::io::stdin().read_line(&mut s).unwrap();
        let s = s.trim().to_string();
        if s != last {
            count += 1;
        }
        last = s;
    }
    println!("{}", count - 1);
}
