/* Bubble Sort.
 * Author: Javier Fadel.
 * Modified: 25 Sept. 2022. */
#include <iostream>
using namespace std;

// TODO: can you return array in c++?

// Main function.
int main() {
    // Variable declaration: the size of array is not dynamic yet.
    int temp, arrLength;
    int pass = 0;

    // User can decide how many data going to the array.
    cout << "Input jumlah data:";
    cin >> arrLength;
    int arr[arrLength];
    int divider = sizeof(arr) / sizeof(int);

    // Loop for input number: each input should be an integer.
    cout << "Input " << divider << " angka..\n";
    for (int i = 0; i < divider; i++) {
        cout << "Number index " << i+1 << ": \n";
        cin >> arr[i];

        // Check if value inputted is integer.
        if (isdigit(arr[i] == 1)) {
            cout << "Data harus berupa integer.\n";
        }
    }

    // Display unsorted array: the original order.
    cout << "Data sebelum disortir: \n";
    for (int i : arr) {
        cout << i << "\t";
    }
    cout << endl;

    // Calculate output value: sorted from minimum to maximum.
    for (int i = 0; i < divider; i++) {
        for (int j = i + 1; j < divider; j++) {
            // Everytime second value is bigger than the first one, swapped out with temporary variables.
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // Log data: shows how many loops/iteration occur.
        pass++;
    }

    // Display sorted array: the complete order, from minimum to maximum.
    cout << "Data setelah disortir:\n";
    for (int i: arr) {
        cout << i << "\t";
    }
    cout << endl;

    // Display how many times the loop are iterated.
    cout << "Jumlah pengulangan adalah " << pass << " kali.\n";

    return 0;
}
