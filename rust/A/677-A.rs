fn main() {
    // 677-A - Vanya and Fence

    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let input: Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let n = input[0];
    let h = input[1];
    let mut a = String::new();
    std::io::stdin().read_line(&mut a).unwrap();
    let a: Vec<i32> = a.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut count = 0;
    for i in a {
        if i > h {
            count += 2;
        } else {
            count += 1;
        }
    }
    println!("{}", count);

}   
