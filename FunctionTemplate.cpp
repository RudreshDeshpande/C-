#include <iostream>
using namespace std;

// Template function for selection sort
template <typename T>
void sort(T a[], int n) {
    T temp;
    int minpos, i, j;

    for (i = 0; i < n - 1; i++) {
        minpos = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minpos]) {
                minpos = j;
            }
        }
        // Swap elements
        if (minpos != i) {
            temp = a[i];
            a[i] = a[minpos];
            a[minpos] = temp;
        }
    }

    // Display sorted elements
    cout << "Sorted Elements in Array: " << endl;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int ch, i, n;
    int a[10];
    float b[10];

    do {
        cout << "1. Sort Integer Array" << endl;
        cout << "2. Sort Float Array" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter size of the integer array: ";
                cin >> n;
                cout << "Enter integer elements: " << endl;
                for (i = 0; i < n; i++) {
                    cin >> a[i];
                }
                sort<int>(a, n);
                break;

            case 2:
                cout << "Enter size of the float array: ";
                cin >> n;
                cout << "Enter float elements: " << endl;
                for (i = 0; i < n; i++) {
                    cin >> b[i];
                }
                sort<float>(b, n);
                break;

            case 3:
                cout << "Exiting program." << endl;
                exit(0);

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (ch != 3);

    return 0;
}
