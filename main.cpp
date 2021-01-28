//   https://www.geeksforgeeks.org/minimum-sum-product-two-arrays/
#include <bits/stdc++.h>
using namespace std;
int minproduct(int a[], int b[], int n, int k)
{
    int diff = 0, res = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        res += a[i] * b[i];
        temp = abs(2 * k * b[i]);
        if (diff < temp)
        diff = temp;
    }
    return res - diff;
}
int main() {
	int a[] = {2, 3, 4, 5, 4};
	int b[] = {3, 4, 2, 3, 2};
	int k = 3;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<minproduct(a,b,n,k);
	return 0;
}
