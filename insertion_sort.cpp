// Insertion Sort Program - Final Version
// Sorts an array of integers using the insertion sort algorithm

#include <iostream>
using namespace std;

int arr[20];
int n;

// Input function: validates size and reads array elements
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

// Insertion sort function: sorts and prints each step
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

// Display function: prints the final sorted array
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
    input();
    insertionSort();
    display();
    system("pause");
    return 0;
}