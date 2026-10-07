// Lab_04_6.cpp
// Клак Соломія
// Лабораторна робота № 4.6
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iostream>
using namespace std;

int main()
{
    double S, P;
    int i, k;

    // 1) while(...) { ... while(...) {...} ... }
    S = 0;
    i = 1;
    while (i <= 10)
    {
        P = 1;
        k = 1;
        while (k <= i)
        {
            P *= (double)k / i;
            k++;
        }
        S += (1 + P) / (i * i);
        i++;
    }
    cout << S << endl;

    // 2) do{ ... do{...} while(...) ... } while(...)
    S = 0;
    i = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= (double)k / i;
            k++;
        } while (k <= i);
        S += (1 + P) / (i * i);
        i++;
    } while (i <= 10);
    cout << S << endl;

    // 3) for(...; ...; i++) { ... for(...; ...; k++) {...} ... }
    S = 0;
    for (i = 1; i <= 10; i++)
    {
        P = 1;
        for (k = 1; k <= i; k++)
        {
            P *= (double)k / i;
        }
        S += (1 + P) / (i * i);
    }
    cout << S << endl;

    // 4) for(...; ...; i--) { ... for(...; ...; k--) {...} ... }
    S = 0;
    for (i = 10; i >= 1; i--)
    {
        P = 1;
        for (k = i; k >= 1; k--)
        {
            P *= (double)k / i;
        }
        S += (1 + P) / (i * i);
    }
    cout << S << endl;

    return 0;
}