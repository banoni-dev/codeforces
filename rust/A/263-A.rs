fn main() {
    // 263A - Beautiful Matrix
    let mut row = 0;
    let mut col = 0;
    for i in 0..5 {
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).unwrap();
        let input: Vec<i32> = input
            .split_whitespace()
            .map(|s| s.parse().unwrap())
            .collect();
        for j in 0..5 {
            if input[j] == 1 {
                row = i;
                col = j;
            }
        }
    }
    println!("{}", (row as i32 - 2).abs() + (col as i32 - 2).abs());
}
