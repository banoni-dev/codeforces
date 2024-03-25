fn main() {

    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input = input.split_whitespace();
    let k: u32 = input.next().unwrap().parse().unwrap();
    let n: u32 = input.next().unwrap().parse().unwrap();
    let w: u32 = input.next().unwrap().parse().unwrap();

    let mut sum = 0;
    for i in 1..=w {
        sum += i * k;
    }
    if sum > n {
        println!("{}", sum - n);
    } else {
        println!("0");
    }

}
