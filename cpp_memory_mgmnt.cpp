#include <iostream>
using namespace std;

int main() {

    // Dynamically allocate memory on the heap
    int* numbers = new int[3];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    cout << "Numbers stored in heap memory:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << endl;
    }

    // Manually free memory
    delete[] numbers;

    // Prevent dangling pointer
    numbers = nullptr;

    cout << "Memory successfully released." << endl;

    return 0;
}
