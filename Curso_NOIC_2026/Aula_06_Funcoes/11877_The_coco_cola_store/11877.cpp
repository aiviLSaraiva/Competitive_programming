// Problema: 11877 - The Coco-Cola Store
// Assunto: Funções
// Plataforma: Online Judge
// Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=226&page=show_problem&problem=2999
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    while (cin >> N && N != 0) {
        int ans = 0;

        while (N >= 3) {
            ans += N / 3;
            N = N / 3 + N % 3;
        }

        if (N == 2)
            ans++;

        cout << ans << endl;
    }

    return 0;
}