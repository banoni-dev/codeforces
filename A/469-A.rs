fn main() {
    // 469-A solution
    use std::io;
    let mut n = String::new();
    io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut x = String::new();

    io::stdin().read_line(&mut x).unwrap();
    
    let mut x: Vec<i32> = x.split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let mut y = String::new();
    io::stdin().read_line(&mut y).unwrap();
    let mut y: Vec<i32> = y.split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    x.remove(0);
    y.remove(0);
    let mut z = x;
    z.append(&mut y);
    z.sort();
    let mut z = z.iter().collect::<Vec<&i32>>();
    z.dedup();
    if z.len() == n as usize {
        println!("I become the guy.");
    } else {
        println!("Oh, my keyboard!");
    }

}


