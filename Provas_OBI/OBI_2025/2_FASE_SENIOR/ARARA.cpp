// Problema: ARARA
// Assunto: Programação básica
// Plataforma:Neps academy - OBI 2025 2 FASE NIVEL SENIOR
// Link:https://neps.academy/br/exercise/3262
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;

    cin >> N >> M;

    int prop;
    prop = M / 5;
    if (M % 5 > 0)
    {
        prop++;
    }

    if (prop >= N)
    {
        cout << "S";
    }
    else
    {
        cout << "N";
    }

    return 0;
}