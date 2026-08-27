// Problema:Alfabeto Alienígena
// Assunto:Vetores
// Plataforma:Neps Academy
// Link:https://neps.academy/br/exercise/2792
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int K, N;

    cin >> K >> N;

    char alfabeto[K];
    char mensagem[N];

    for (int i = 0; i < K; i++)
    {
        cin >> alfabeto[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> mensagem[i];
    }
    int tem = 0, resp = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (mensagem[i] == alfabeto[j])
            {
                tem = 1;
                break;
            }
        }
        if (tem == 0)
        {
            resp = 0;
        }

        tem = 0;
    }

    if (resp == 0)
    {
        cout << "N";
    }
    else
    {
        cout << "S";
    }

    return 0;
}