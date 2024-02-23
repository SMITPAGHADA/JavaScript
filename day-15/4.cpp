

#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    int c;
    cout << "Press 1 for + ,press 2 for - ,Press 3 for *,Press 4 for /,Press 5 for % ";
    cin >> c;

    switch (c)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;
    case 5:
        cout << a % b << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
}
