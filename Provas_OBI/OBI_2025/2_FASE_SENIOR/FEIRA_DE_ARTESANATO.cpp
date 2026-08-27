// Problema: Feira de Artesanato 
// Assunto: Vetores
// Plataforma: Neps Academy
// Link: https://neps.academy/br/exercise/3266
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,T;
    cin >> N >> T;

    int objetos[N];

    for(int i = 0;i < N;i++){
        cin >> objetos[i];
    }

    int precos[N];

    for(int i = 0;i < N;i++){
        cin >> precos[i];
    }

    int C;
    cin >> C;

    int clientes[C];
    for(int i = 0;i < N;i++){
        cin >> clientes[i];
    }
    return 0;

    for(int i = 0;i < C;i++){
        if(clientes[i] != 0){
            for(int j = 0;j < N;j++){
                
            }
        }
    }
}