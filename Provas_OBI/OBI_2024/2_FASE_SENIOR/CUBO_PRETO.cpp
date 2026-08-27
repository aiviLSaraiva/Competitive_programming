// Problema: Cubo Preto
// Assunto: Operações Numéricas
// Plataforma: Neps Academy
// Link: https://neps.academy/br/exercise/2797
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int nf, uf, df, tf;

    tf = 8;
    df = (N - 2) * 12;
    uf = 6 * (N - 2) * (N - 2);
    nf = (N - 2) * (N - 2) * (N - 2);

    cout << nf << endl;
    cout << uf << endl;
    cout << df << endl;
    cout << tf << endl;

    return 0;
}