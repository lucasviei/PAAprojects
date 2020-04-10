#include<bits/stdc++.h>

using namespace std;
int receita[51];

int main(){
    int numeroDias, custoPorDia,venda, lucro, saldo;
    while (scanf("%d",&numeroDias) == 1)
    {
        scanf("%d",&custoPorDia);
        lucro = 0;
        saldo = 0;
        for (int i = 0; i < numeroDias; i++)
        {
            scanf("%d",&venda);
            receita[i] = venda - custoPorDia;
        }
        for (int j = 0; j < numeroDias; j++)
        {
            saldo += receita[j];
            if(saldo < 0){
                saldo = 0;
            }
            if(lucro < saldo){
                lucro = saldo;
            }
        }
        cout << lucro << endl;
        
    }
    return 0;
}