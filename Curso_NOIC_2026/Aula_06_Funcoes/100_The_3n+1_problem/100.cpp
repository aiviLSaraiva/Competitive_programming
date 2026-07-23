// Problema: 100 The 3n+1 problem 
// Assunto: Funções
// Plataforma: Online Judge
// Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=226&page=show_problem&problem=2999
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int tciclo(int N) {
    int cont = 1;

    while (N != 1) {
        if (N % 2 == 1)
            N = 3 * N + 1;
        else
            N /= 2;

        cont++;
    }

    return cont;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, j;

    while (cin >> i >> j) {

        int originalI = i;
        int originalJ = j;

        if (i > j)
            swap(i, j);

        int maior = 0;

        for (int k = i; k <= j; k++) {
            maior = max(maior, tciclo(k));
        }

        cout << originalI << " " << originalJ << " " << maior << endl;
    }

    return 0;
}