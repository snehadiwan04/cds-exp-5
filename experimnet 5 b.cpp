// sneha diwan
// 23070123126
// entc b2 
// experiment 3 b
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2) {
        if (num1 >= num3)
            cout << "Largest number: " << num1;
        else
            cout << "Largest number: " << num3;
    }
    else {
        if (num2 >= num3)
            cout << "Largest number: " << num2;
        else
            cout << "Largest number: " << num3;
    }
    return 0;
}

/*
Enter three numbers: 87
98
58
Largest number: 98

*/