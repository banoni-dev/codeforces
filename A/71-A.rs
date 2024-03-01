fn main() {

 // 71-A
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();
    for _ in 0..n {
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).unwrap();
        let word = input.trim();
        if word.len() > 10 {
            println!("{}{}{}", word.chars().next().unwrap(), word.len() - 2, word.chars().last().unwrap());
        } else {
            println!("{}", word);
        }
    }

}

