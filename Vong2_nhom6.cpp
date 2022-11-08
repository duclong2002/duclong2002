#include<iostream>
using namespace std;
void est(int arr[], int n, int i) {
    int max = i;
    int l = i * 2 + 1; 
    int r = l + 1; 
    if (l<n && arr[l] > arr[max]) {
        max = l;
    }

    if (r<n && arr[r] > arr[max]) {  
        max = r;
    }
    if (max != i) {   
        swap(arr[i], arr[max]);
        est(arr, n, max); 
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        est(arr, n, i);
    }
    for (int j = n - 1; j > n-2; j--) { 
        swap(arr[0], arr[j]);
        est(arr, j, 0);
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() {
    int a[20] = { 1,-2,9,7,-8,6,10,101,-200,-21,67,58,31,-50,-1000,10,3,1,9,-9 };
    heapSort(a,20);
    return 0;
}