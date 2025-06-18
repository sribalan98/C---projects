#include <iostream>
using namespace std;


void calcPlus(); // Function prototype
void calcMinus();
void calcMultiple();
void calcDivide();

int main() {
    calcPlus();
    calcMinus();
    calcMultiple();
    calcDivide();
    return 0;
}

void calcPlus() {
    int x , y;
    cout << "Enter two numbers to add: " << endl;
    cin >> x;
    cin >> y;
    int sum = x + y;
    cout << "The sum of " << x << " and " << y << " is : " << sum << endl;
}

void calcMinus() {
    int x , y;
    cout << "Enter two numbers to minus: " << endl;
    cin >> x;
    cin >> y;
    int sum = x - y;
    cout << "The sum of " << x << " and " << y << " is : " << sum << endl;
}


void calcMultiple() {
    int x , y;
    cout << "Enter two numbers to multiple: " << endl;
    cin >> x;
    cin >> y;
    int sum = x * y;
    cout << "The sum of " << x << " and " << y << " is : " << sum << endl;
}

void calcDivide() {
    int x , y;
    cout << "Enter two numbers to divide: " << endl;
    cin >> x;
    cin >> y;
    if (y == 0) {
        cout << "Cannot divide by zero!" << endl;
        return;
    }
    int sum = x / y;
    cout << "The sum of " << x << " and " << y << " is : " << sum << endl;
}