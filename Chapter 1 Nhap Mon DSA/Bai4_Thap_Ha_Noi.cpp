#include <bits/stdc++.h>
using namespace std;

int dem = 0;

void HNTower(char a, char b, char c, int n)
{
    if (n == 1){
        cout << a << " -> " << c << '\n';
        ++dem;
        return;
    }
    HNTower(a, c, b, n-1);
    HNTower(a, b, c, 1);
    HNTower(b, a, c, n-1);
}

int main()
{
    int n;
    cin >> n;
    HNTower('A', 'B', 'C', n);
    cout << "So buoc di chuyen it nhat la: " <<  dem << '\n';
    return 0;
}
