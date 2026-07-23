// Problema: ACOES1MG - Investindo no mercado de açőes 1
// Assunto: Funções
// Plataforma: SPOJ
// Link: https://br.spoj.com/problems/ACOES1MG/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll empresas(int N, int K)
{
    if (N <= K)
        return 1;

    return empresas(N / 2, K) + empresas(N - N / 2, K);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;

    while (cin >> N >> K)
    {
        if (N == 0 && K == 0)
            break;

        cout << empresas(N, K) << '\n';
    }

    return 0;
}