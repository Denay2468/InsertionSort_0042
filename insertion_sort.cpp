#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if (n <= 20) {
            break;
        } else {
            cout << "\nArray cannot have more than 20 elements.\n";
        }
    }
    cout << endl;
    cout << "==============================================\n";
    cout << "============= Enter Array Elements ===========\n";
    cout << "==============================================\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

}
void insertionSort() {}
void display() {}

int main() {
    return 0;
}