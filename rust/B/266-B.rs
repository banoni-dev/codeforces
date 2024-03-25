fn main() {
    // 266-B solution 
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input = input.trim().split_whitespace();
    let n: usize = input.next().unwrap().parse().unwrap();
    let t: usize = input.next().unwrap().parse().unwrap();
    let mut s: String = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let mut s: Vec<char> = s.trim().chars().collect();
    for _ in 0..t {
        let mut i = 0;
        while i < n - 1 {
            if s[i] == 'B' && s[i + 1] == 'G' {
                s[i] = 'G';
                s[i + 1] = 'B';
                i += 2;
            } else {
                i += 1;
            }
        }
    }
    println!("{}", s.iter().collect::<String>());
}
