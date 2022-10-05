/* Bubble Sort.
 * Author: Javier Fadel.
 * Modified: 25 Sept. 2022. */
#include <iostream>
using namespace std;

// TODO: can you return array in c++?
// TODO: ask the user if the calculated value is minimum to maximum or vice versa.
// TODO: check if option's character value is valid.
/* TODO: can you return array in c++?
 * TODO: create a function to display array */

// Main function.
int main() {
    // Variable declaration: the size of array is not dynamic yet.
    int temp, arrLength, smallestNumb, largestNumb, pass = 0;
    char optionSelected;

    // User can decide the order: minimum to maximum or vice versa.
    cout << "Pilih urutan: \n";
    cout << "[a] Kecil ke Besar\n";
    cout << "[b] Besar ke Kecil\n";
    cin >> optionSelected;

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
            // Sorting algorithm based on option selected.
            if (tolower(optionSelected) == 'a') {
                // Everytime second value is lower than the first one, swapped out with temporary variables.
                if (arr[j] < arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                // Smallest number should be the first index, largest should be the last.
                smallestNumb = arr[0];
                largestNumb = arr[divider-1];
            } else if (tolower(optionSelected) == 'b') {    
                // Everytime second value is bigger than the first one, swapped out with temporary variables.
                if (arr[j] > arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                smallestNumb = arr[divider-1];
                largestNumb = arr[0];
            } else {
                // Option not valid.
                cout << "Opsi pilihan tidak valid.\n";
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
