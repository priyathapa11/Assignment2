fn print_numbers(numbers: &Vec<i32>) {
    // Borrowing the vector without taking ownership
    for number in numbers {
        println!("{}", number);
    }
}

fn main() {
    // Dynamically allocate memory on the heap
    let numbers = Box::new(vec![10, 20, 30]);

    println!("Numbers stored in heap memory:");

    // Pass a reference (borrow) to the function
    print_numbers(&numbers);

    // Ownership remains with `numbers`
    println!("First number: {}", numbers[0]);

    // Memory is automatically released
    // when `numbers` goes out of scope
}
