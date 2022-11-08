#include <iostream>
using namespace std;
int main() {
    int a[] = { -2, 1, 5, 4, -3, 1, -3, 4, -1 };
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
