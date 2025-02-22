#include <iostream>
using namespace std;
// Function to print Fibonacci sequence up to x terms
void fibonacci(int x) {
	//declaring variables
    long long a=0, b=1, next;
    cout << "Fibonacci Sequence: ";
    // Print the first x terms of the Fibonacci sequence
    //For loop
    for (int i=0; i<x; i++) {
    	
        if (i == 0)
            cout <<a <<" ";
        else if (i == 1)
            cout <<b <<" ";
        else {
            next = a + b; 
             // Calculate the next Fibonacci number
            cout <<next <<" ";
            // update a to the previous b
            a = b;
            // update b to the new Fibonacci number
            b = next;  
        }
    }
    cout<<endl;
}
int main() {
	//declaring variable
    int num;
    //prompting user to enter number of terms
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    //collecting the users input
    cin >> num;
    //To check if the number entered is negative or zero
    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
    	 // Calling function to print Fibonacci sequence
        fibonacci(num); 
    }
    return 0;
}