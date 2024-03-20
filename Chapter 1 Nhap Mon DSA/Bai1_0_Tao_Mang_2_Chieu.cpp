#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    srand(0);
    int a[] = {5, 10, 50, 100, 250};
    int dem = 0;
    for (int i : a)
    {
        ofstream f("BAI_1_" + to_string(++dem)+".INP");

        f << i << '\n';
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < i; ++k)
                f << rand()%(3*i)-i << ' ';
            f << '\n';
        }
        f << '\n';
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < i; ++k)
                f << rand()%(3*i)-i << ' ';
            f << '\n';
        }

    }
    return 0;
}
