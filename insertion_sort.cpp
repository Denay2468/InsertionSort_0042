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
void insertionSort() {
    int temp;
    int j;
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nStep " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}
void display() {
    cout << endl;
    cout << "\n================\n";
    cout << "Element Array\n";
    cout << "================\n";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main() {
    return 0;
}