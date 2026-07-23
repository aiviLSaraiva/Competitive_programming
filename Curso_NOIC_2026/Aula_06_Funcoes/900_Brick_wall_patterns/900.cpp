// Problema: 900 - Brick Wall Patterns
// Assunto: Funções
// Plataforma: Online Judge
// Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=841
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int pattern(int N)
{
    if (N == 1) return 1;
    if (N == 2) return 2;

    return pattern(N - 1) + pattern(N - 2);
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N && N != 0)
    {
        cout << pattern(N) << endl;
    }

    return 0;
}