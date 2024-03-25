fn main() {
    // 110-A (nearly lucky number)
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut count = 0;
    for c in input.chars() {
        if c == '4' || c == '7' {
            count += 1;
        }
    }
    if count == 4 || count == 7 {
        println!("YES");
    } else {
        println!("NO");
    }

}
