// this is a program to calculate the sum of two numbers.

#include <iostream> // this is to include the iostream library.
using namespace std; // this is to use the standard namespace.  

int main(){ // this is the main function.   
    int a, b; // a and b are variables to store the two numbers.    
    cout << "Enter two numbers: "; // this is to display the message on the screen.     
    cin >> a >> b; // this is to take the input from the user.
    int sum = a + b; // this is to calculate the sum of the two numbers.    
    cout << "The sum of " << a << " and " << b << " is " << sum << endl; // this is to display the result on the screen.
    return 0; // this is to return the value 0 to the operating system.
}

//output:
//Enter two numbers: 10 20
//The sum of 10 and 20 is 30
    