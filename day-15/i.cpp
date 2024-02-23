#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "ENTER NUMBER" << endl;
    cin >> i;

    (i < 0 || i == 0) ?

                      cout << "enter positive number" << endl

                      :

                      (i % 2 == 0) ?

                                   cout << i << " this is even number" << endl

                                   :

                                   cout << i << " this is odd number" << endl;

    return 0;
}
