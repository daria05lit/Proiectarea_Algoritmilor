#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];

    int count[max + 1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++)
        while (count[i]--)
            arr[index++] = i;
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr, n);

    cout << "Counting Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}