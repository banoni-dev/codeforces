fn main() {
    // 1915-A solution
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    // read s tring and split it in to vector of strings and transform it to vector of integers and
    // store the fisrt element in a variable
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let s: Vec<i32> = s.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut a = s[0];
    let mut b = s[1];
    let mut c = s[2];
    for i in 0..n {
        if a == b {
            println!("{}", c);
        } else if a == c {
            println!("{}", b);
        } else {
            println!("{}", a);
        }
    }


}
