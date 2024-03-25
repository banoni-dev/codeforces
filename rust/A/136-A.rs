fn main() {
    // 136-A Presents
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let n: u32 = input.trim().parse().unwrap();
    input.clear();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut presents: Vec<u32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut result: Vec<u32> = vec![0; n as usize];
    for i in 0..n {
        result[presents[i as usize] as usize - 1] = i + 1;
    }
    for i in 0..n {
        print!("{} ", result[i as usize]);
    }
}
