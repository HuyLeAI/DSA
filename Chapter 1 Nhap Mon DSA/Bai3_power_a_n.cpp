#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int n;

ull dequy(int a, int n)
{
    if (n == 0)
        return 1;
    ull k = dequy(a, n/2);
    return n&1 ? a*k*k : k*k;

}

ull khongdequy(int a, int n)
{
    if (n == 0)
        return 1;
   ull res = 1;
   for (int i = 1; i <= n; ++i)
    res *=a;
    return res;
}

int main()
{
    clock_t st, en;

    st = clock();
    cout << dequy(1, 1'000'000'000) << '\n';
    en = clock();
    cout << "Thoi gian thuc hien de quy la " << (en-st)/1000.0 << "s\n";

    st = clock();
    cout << khongdequy(2, 1'000'000'000) << '\n';
    en = clock();
    cout << "Thoi gian thuc hien khong de quy la " << (en-st)/1000.0 << "s\n";

    return 0;
}
