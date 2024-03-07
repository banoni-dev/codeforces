fn main() {
    // 734-A - Anton and Danik
    use std::io;
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    let mut a = 0;
    let mut d = 0;
    for c in input.trim().chars() {
        match c {
            'A' => a += 1,
            'D' => d += 1,
            _ => (),
        }
    }
    if a > d {
        println!("Anton");
    } else if a < d {
        println!("Danik");
    } else {
        println!("Friendship");
    }
}
