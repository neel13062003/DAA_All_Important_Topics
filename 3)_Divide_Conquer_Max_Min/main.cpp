#include <bits/stdc++.h>
using namespace std;
void findMinAndMax(int a[], int low, int high, int &min, int &max){
    if (low == high) {
        if (max < a[low]) {
            max = a[low];
        }
        if (min > a[high]) {
            min = a[high];
        }
        return;
    }
    if (high - low == 1){
        if (a[low] < a[high]) {
            if (min > a[low]) {
                min = a[low];
            }
             if (max < a[high]) {
                max = a[high];
            }
        }
        else {
            if (min > a[high]) {
                min = a[high];
            }
            if (max < a[low]){
                max = a[low];
            }
        }
        return;
    }
    int mid = (low + high) / 2;
    findMinAndMax(a, low, mid, min, max);
    findMinAndMax(a, mid + 1, high, min, max);
}
int main()
{
    int a[] = { 7, 2, 9, 3, 1, 6, 7, 8, 4 };
    int max = INT_MIN, min = INT_MAX;

    int n = 9;
    findMinAndMax(a, 0, n - 1, min, max);

    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max << endl;

    return 0;
}
