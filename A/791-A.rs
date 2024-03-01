fn main() {
    // 791-A (Bear and Big Brother)
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input = input.trim().split_whitespace();
    let mut a: i32 = input.next().unwrap().parse().unwrap();
    let mut b: i32 = input.next().unwrap().parse().unwrap();
    let mut years = 0;
    while a <= b {
        a *= 3;
        b *= 2;
        years += 1;
    }
    println!("{}", years);
}
