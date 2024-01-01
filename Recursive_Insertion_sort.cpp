#include <bits/stdc++.h>
using namespace std;

void Recursive_insertion_sort(int arr[], int i, int n) {
    int didSwap=0;

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
        didSwap=1;
    }
    if(didSwap==0) return;

    Recursive_insertion_sort(arr, i + 1, n);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Recursive_insertion_sort(arr, 0, n);
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}