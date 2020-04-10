#include<bits/stdc++.h>

using namespace std;

struct bolo
{
    int quantingred;
    int indice;
    int porcao;

}bolos[101];
int maior = 0;
int grana[101];
int ingredientes[101];

int main(){
    int casoTeste;
    int dinheiro,existentes,tipo;
    scanf("%d",&casoTeste);
    for (int i = 0; i < 102; i++)
    {
        grana[i] = 0;
    }
    while (casoTeste--)
    {
        scanf("%d%d%d",&dinheiro,&existentes,&tipo);
        for (int i = 0; i < existentes; i++)
        {
            scanf("%d",&ingredientes[i]);
        }
        for (int j = 0; j < tipo; j++)
        {
            scanf("%d",&bolos[j].quantingred);
            for (int k = 0; k < bolos[j].quantingred; k++)
            {
                scanf("%d%d",&bolos[j].indice,&bolos[j].porcao);
                grana[j] += ingredientes[bolos[j].indice]*bolos[j].porcao;

            }
            if( maior < (dinheiro/grana[j])){
                maior = (dinheiro/grana[j]);    
            }
            grana[j] = 0;
        }

        cout << maior << endl;
        maior = 0;
        
    }

    return 0;
}