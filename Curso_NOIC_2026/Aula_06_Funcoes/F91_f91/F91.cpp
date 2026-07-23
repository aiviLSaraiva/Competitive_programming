// Problema - F91
// Assunto - Funções
// Link: https://br.spoj.com/problems/F91/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int f91(int N)
{
    if (N >= 101)
        return N - 10;
    else
        return f91(f91(N + 11));
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N && N != 0)
    {
        cout << "f91(" << N << ") = " << f91(N) << "\n";
    }

    return 0;
}