#include <iostream>
#include <functional>
#include <string>

using namespace std;

function<string(int)> outerFunction(int x) {

    string message = "C++ closure";

    return [x, message](int y) {
        return message + ": " + to_string(x + y);
    };
}

int main() {

    auto addFive = outerFunction(5);

    cout << addFive(10) << endl;

    return 0;
}
