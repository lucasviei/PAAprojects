#include<bits/stdc++.h>

using namespace std;

void missao(int* d,int* p,int c,int r){
    int i = 0;
    int j = 0;
    int a = 0;
    do{
        i += p[j];
        ++j;
    }while (i <= c);
    --j;
    for (int k = 0; k < j; k++)
    {
        a += d[k];
    }
    if (a >= r)
    {
        cout << "Missao completada com sucesso" << endl;
    }
    else
    {
        cout << "Falha na missao" << endl;
    }
    
    
    
    
}

int main(){
    int casosDeTeste;
    int disponiveis;
    cin >> casosDeTeste;
    int contador = 0;
    while (contador < casosDeTeste)
    {
        cin >> disponiveis;
        if(disponiveis <= 50){
            int poderDestruicao[disponiveis];
            int pesoProjetil[disponiveis];
            for (int i = 0; i < disponiveis; i++)
            {
                cin >> poderDestruicao[i];
                cin >> pesoProjetil[i];
            }
            int capacidade,resistencia;
            cin >> capacidade;
            if(capacidade <= 100){
                cin >> resistencia;
                missao(poderDestruicao,pesoProjetil,capacidade,resistencia);
                ++contador;
            }
        }
    }
    
    return 0;
}