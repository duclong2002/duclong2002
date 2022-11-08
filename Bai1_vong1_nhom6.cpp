#include <iostream>
using namespace std;
int main() {
    int a[] = { 1,-2,9,7,-8,6,10,101,-200,-21,67,58,31,-50,-1000,10,3,1,9,-9 };
    int n = sizeof(a) / 4;
    int maxsum = 0;
    int sum = 0;
    int begin = 0, end = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            if (maxsum < sum)
            {
                maxsum = sum;
                begin = i; end = j;
            }
        }
    }

    cout << maxsum << "\n";
    for (int i = begin; i <= end; i++) cout << a[i] << " ";
    return 0;
}