// Problema: 1029 - Fibonacci, How Many Calls?
// Assunto: Funções
// Plataforma: BeeCrowd
// Link: https://judge.beecrowd.com/en/problems/view/1029
#include <bits/stdc++.h>

using namespace std;

int calls;

int fib(int N)
{
    calls++;

    if (N == 0)
        return 0;
    if (N == 1)
        return 1;

    return fib(N - 1) + fib(N - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int X;
        cin >> X;

        calls = 0;
        int ans = fib(X);

        cout << "fib(" << X << ") = " << calls - 1 << " calls = " << ans << '\n';
    }
}