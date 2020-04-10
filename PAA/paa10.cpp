#include <bits/stdc++.h>

using namespace std;

int filaaux[1001];
int fila[1001];
int dm;
void ordemdescrescente(int * f, int n){
    int troca = 0;
    for (int i = 0; i < n; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if(f[i] < f[j]){
                troca = f[i];
                f[i] = f[j];
                f[j] = troca;
            }
        }
        
    }
    
}

int main(){
    int numpessoas, numgrupos;
    while (scanf("%d %d",&numpessoas,&numgrupos) != EOF)
    {
        filaaux[0] = 0;
        fila[0] = 0;
        for (int i = 1; i < numpessoas; i++)
        {
            scanf("%d",&filaaux[i]);
            fila[i] = filaaux[i] - filaaux[i-1];
        }
        ordemdescrescente(fila,numpessoas);
        dm = 0;
        for (int i = numgrupos-1; i < numpessoas; i++)
        {
            dm += fila[i];
        }
        cout << dm << endl;
        
    }
    


    return 0;
}