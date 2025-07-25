#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    if (num%2== 0) {
        cout << "\n" << num << " is even.";
    }
    else {
        cout << "\n" << num << " is odd.";
    }
    return 0;
}
