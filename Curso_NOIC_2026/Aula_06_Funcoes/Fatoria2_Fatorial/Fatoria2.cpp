// Problema: FATORIA2 - Fatorial
// Assunto: Funções
// Plataforma: SPOJ
// Link: https://br.spoj.com/problems/FATORIA2/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int fatorial(int N)
{
    if (N == 0 || N == 1)
        return 1;
    else
        return N * fatorial(N - 1);
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    cout << fatorial(N);

    return 0;
}