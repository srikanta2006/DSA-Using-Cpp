#include <iostream>
using namespace std;

void print_unique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 4, 5, 3};
    int size = 9;

    print_unique(arr, size);

    return 0;
}
