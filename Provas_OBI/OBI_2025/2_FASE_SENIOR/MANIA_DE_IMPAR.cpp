// Problema: Mania de Ímpar
// Assunto: Matrizes
// Plataforma: Neps Academy
// Link:https://neps.academy/br/exercise/3267
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

    int gotas[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> gotas[i][j];
        }
    }

    int p1 = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i + j) % 2 == 0)
            {
                if ((gotas[i][j]) % 2 == 1)
                {
                    p1++;
                }
            }
            else
            {
                if ((gotas[i][j]) % 2 == 0)
                {
                    p1++;
                }
            }
        }
    }

    int p2 = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i + j) % 2 == 0)
            {
                if ((gotas[i][j]) % 2 == 0)
                {
                    p2++;
                }
            }
            else
            {
                if ((gotas[i][j]) % 2 == 1)
                {
                    p2++;
                }
            }
        }
    }

    if (p1 <= p2)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    if ((gotas[i][j]) % 2 == 1)
                    {
                        gotas[i][j]++;
                    }
                }
                else
                {
                    if ((gotas[i][j]) % 2 == 0)
                    {
                        gotas[i][j]++;
                    }
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    if ((gotas[i][j]) % 2 == 0)
                    {
                        gotas[i][j]++;
                    }
                }
                else
                {
                    if ((gotas[i][j]) % 2 == 1)
                    {
                        gotas[i][j]++;
                    }
                }
            }
        }
    }

    cout << min(p1, p2) << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << gotas[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}