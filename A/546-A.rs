fn main() {
    // 546-A
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let mut input: Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut n = input[0];
    let mut k = input[1];
    let mut w = input[2];
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
