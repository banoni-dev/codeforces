fn main() {
    // 236-A
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let s = s.trim();
    let mut v = vec![0; 26];
    for c in s.chars() {
        v[c as usize - 'a' as usize] += 1;
    }
    let mut cnt = 0;
    for i in 0..26 {
        if v[i] > 0 {
            cnt += 1;
        }
    }
    if cnt % 2 == 0 {
        println!("CHAT WITH HER!");
    } else {
        println!("IGNORE HIM!");
    }
}
