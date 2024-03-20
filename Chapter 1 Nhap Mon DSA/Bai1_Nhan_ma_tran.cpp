#include <bits/stdc++.h>
using namespace std;

const int MAXN = 255;

int n, a[MAXN][MAXN], b[MAXN][MAXN], c[MAXN][MAXN];

void readFile(string s)
{
    ifstream f(s);
    f >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            f >> a[i][j];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            f >> b[i][j];
}

void show(int a[][MAXN], int n)
{
     for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
     }
}

void MatrixMutiply()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= n; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }
}

int main()
{
    string s = "BAI_1_5.INP";
    readFile(s);
    cout << "Mang A\n";
    show(a, n);
    cout << "Mang B\n";
    show(b, n);
    cout << "Mang C = A*B\n";
    MatrixMutiply();
    show(c, n);
    return 0;
}
