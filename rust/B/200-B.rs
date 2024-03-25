
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n: usize = input.trim().parse().expect("Invalid input");

    input.clear();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let volumes: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().expect("Invalid input"))
        .collect();

    let total_volume: f64 = volumes.iter().sum();
    let orange_juice_fraction: f64 = volumes.iter().map(|&x| x / 100.0).sum();

    let result = orange_juice_fraction / n as f64 * 100.0;

    println!("{:.12}", result);
}
