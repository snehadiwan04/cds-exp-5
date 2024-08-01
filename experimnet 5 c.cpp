// sneha diwan
// 23070123126
// entc b2 
// experiment 5 b
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "1."  << endl
         << "2. " << endl
         << "3." << endl
         << "4. " << endl
         << "5. " << endl
         << "6. " << endl
         << "7. " << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
    }

    return 0;
}

/*  output
1.
2. 
3.
4. 
5. 
6. 
7. 
Enter your choice: 5
Friday

*/
