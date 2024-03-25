fn main() {
    // 61 A. Ultra-Fast Mathematician
    let mut s1 = String::new();
    std::io::stdin().read_line(&mut s1).unwrap();
    let mut s2 = String::new();
    std::io::stdin().read_line(&mut s2).unwrap();
    let s1 = s1.trim();
    let s2 = s2.trim();
    let mut result = String::new();
    for (i, j) in s1.chars().zip(s2.chars()) {
        if i == j {
            result.push('0');
        } else {
            result.push('1');
        }
    }
    println!("{}", result);


}
