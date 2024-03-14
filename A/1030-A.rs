fn main() {
    // 1030-A - In Search of an Easy Problem
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let mut a = String::new();
    std::io::stdin().read_line(&mut a).unwrap();
    let a: Vec<i32> = a.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut result = "EASY";
    for i in a {
        if i == 1 {
            result = "HARD";
            break;
        }
    }
    println!("{}", result);
}
