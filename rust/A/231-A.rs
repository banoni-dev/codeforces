fn main() {
  // 231-A - Team  - https://codeforces.com/problemset/problem/231/A
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut count = 0;
    for _ in 0..n {
        let mut s = String::new();
        std::io::stdin().read_line(&mut s).unwrap();
        let s: Vec<i32> = s.split_whitespace().map(|x| x.parse().unwrap()).collect();
        if s.iter().sum::<i32>() >= 2 {
            count += 1;
        }
    }
    println!("{}", count);





}
