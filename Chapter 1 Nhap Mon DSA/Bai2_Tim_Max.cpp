#include <bits/stdc++.h>
using namespace std;



int main()
{
    int a[] = {1, 7, 5, -10, 23, 89, 90, 100, 28, 27};
    int n = sizeof(a)/sizeof(int);
    cout << *max_element(a, a+n) << '\n';
    return 0;
}
