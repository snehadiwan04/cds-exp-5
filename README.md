# Experiment-5
## Aim -
To study and implement C++ decision making statements.
## Apparatus -
Online compiler (programiz)

## Theory -
Decision-making statements control the flow of a program based on conditions. Key types include:
### 1. *If-Else Statement*:
Executes one block if the condition is true, another if false.
### 2.*Nested if-else statements*:
these are used when you need to check multiple conditions in a hierarchical manner. An if or else block can contain another if-else statement inside it. This is useful for more complex decision-making processes.
### 3. *calculator statement*:
it is used for doing mathematical calculations among some given values.
### 4. *Switch Case Statement*: 
Used in some languages to handle multiple conditions, mimicked in Python using dictionaries.

## code -
### 1.
```
//sneha diwan 
//23070123126
//entc b2
#include <iostream>
using namespace std;
int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    else 
        cout << "Largest number: " << n3;
        return 0;
}
```

### 2.
```
//sneha diwan
//23070123126
//entc B2
//experiment 5
#include <iostream>
using namespace std;
int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2) 
    {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    return 0;
}
```

### 3.
```
//sneha diwan
//23070123126
//entc B2
//experiment 5
#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! The operator is not correct" << endl;
            break;
    }

    return 0;
}
```

### 4.
```
//sneha diwan 
//23070123126
//entc B2
//experiment 5
#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. " << endl
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
```

## Explanation:-
*if else*: statement for executing a block if it is true otherwise for false.

*nested if else*: are used when you need to check multiple conditions hierarchically.
## Output
### 1.

*calculator statement*:is used for doing mathematical calculations among some given values.

*Switch Case Statement*: Used in some languages to handle multiple conditions, mimicked in Python using dictionaries.

## Output:-
### 1.![Screenshot 2024-08-01 235012](https://github.com/user-attachments/assets/f4a105ef-e649-43e9-828a-bce6708f789d)

### 2.![Screenshot 2024-08-01 235421](https://github.com/user-attachments/assets/e7fb911f-23a2-44fa-ba36-ffdb9e4e0d12)

### 3.![Screenshot 2024-08-01 235733](https://github.com/user-attachments/assets/f8920bf6-23ef-4bd7-b7b2-7ca30607ac31)

### 4.![Screenshot 2024-08-02 000321](https://github.com/user-attachments/assets/3b9384ef-2413-4a4b-9d3b-adcbfe70103b)
## Conclusion:-
Decision-making statements in programming control the flow of execution based on conditions. The if-else statement executes different code blocks depending on whether a condition is true or false, while the nested if else statement allows for multiple conditions to be checked in sequence. The switch statement provides a way to select one of many code blocks to execute based on the value of an expression, ideal for handling discrete values. calculator helps in doing mathematical operations.
