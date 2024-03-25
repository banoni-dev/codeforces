fn main() {
    // 977-A (word subtraction)
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input: Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut n = input[0];
    let mut k = input[1];
    for _ in 0..k {
        if n % 10 == 0 {
            n /= 10;
        } else {
            n -= 1;
        }
    }
    println!("{}", n);
}
