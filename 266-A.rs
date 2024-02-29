fn main() {
    // 266-A (stones on the table) 
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let mut count = 0;
    for i in 0..n.trim().parse::<usize>().unwrap() - 1 {
        if s.chars().nth(i).unwrap() == s.chars().nth(i + 1).unwrap() {
            count += 1;
        }
    }
    println!("{}", count);

}
