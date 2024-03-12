fn main() {
    // 271-A - Beautiful Year
    let mut year = String::new();
    std::io::stdin().read_line(&mut year).unwrap();
    let mut year: i32 = year.trim().parse().unwrap();
    year += 1;
    while {
        let mut digits = Vec::new();
        let mut temp = year;
        while temp > 0 {
            digits.push(temp % 10);
            temp /= 10;
        }
        digits.sort();
        digits.dedup();
        digits.len() < 4
    } {
        year += 1;
    }
    println!("{}", year);
}
