fn main() {
    // 916-A (Tram)
    // solve 116-A
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let n: i32 = s.trim().parse().unwrap();
    let mut max = 0;
    let mut current = 0;
    for _ in 0..n {
        let mut s = String::new();
        std::io::stdin().read_line(&mut s).unwrap();
        let v: Vec<i32> = s.trim().split(" ").map(|x| x.parse().unwrap()).collect();
        current = current - v[0] + v[1];
        if current > max {
            max = current;
        }
    }
    println!("{}", max);


}
