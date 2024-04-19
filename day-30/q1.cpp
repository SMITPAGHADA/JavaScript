// Write a Program to find the sum of all digits of a given number. Only use for loop to solve a problem.
// For example,
// Input:
// Enter any number: 673

// Output:
// Sum is 16
// *
// Enter your code here. If you can not answer the question, write NA as an answer.
#include <iostream>
using namespace std;

int main()
{
    int num,  remainder, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

  

    for (int i = 0; i < num; i++)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    cout << "Sum of digits of " <<  " = " << sum << endl;
    return 0;
}