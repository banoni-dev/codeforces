fn main() {
    // 705-A solution
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut s = String::new();
    for i in 1..n {
        if i % 2 == 0 {
            s.push_str("I love that ");
        } else {
            s.push_str("I hate that ");
        }
    }
    if n % 2 == 0 {
        s.push_str("I love it");
    } else {
        s.push_str("I hate it");
    }
    println!("{}", s);

}
