#include <iostream>
using namespace std;
//function to print factorials
int factorial(int n) {
    int result = 1;
    // for loop
    for (int i = 1; i <= n; i++) {
       // Multiply the result by current value of i
	    result *= i;
    }
    return result;
}
int main() {
    int num;
    //prompting user to enter input
    cout << "Enter a positive integer: ";
    //collecting the user input
    cin >> num;
    //to check if number entered is negative
    if (num < 0) {
        cout << "no factorial for negative numbers.\n";
    } else {
        cout << "Factorial of " << num << " is: \n" << factorial(num);
    }
    return 0;
}