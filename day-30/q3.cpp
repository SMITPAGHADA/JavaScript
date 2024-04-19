
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    int count = 0;
    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            count++;
        }
    }

    int *arr = new int[count];
    int index = 0;
    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            arr[index] = i;
            index++;
        }
    }

    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / count;

    cout << "Odd elements array: ";
    for (int i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Average of odd elements: " << average << endl;
}