#include<bits/stdc++.h>

using namespace std;

int N, Q;
int repet[25];
string musica[26];




string tocamusica(int numero, int escolha){
    if(escolha == 1){
        return musica[numero-1];
    }
    int x = (repet[escolha]-repet[escolha-1])/escolha;

    if((numero-repet[escolha-1]-1)%escolha == 0){
        return musica[int(ceil( ceil(double(numero-repet[escolha-1])/double(escolha) )/(x/N) ))-1 ];
    }

    int n = ceil( double(numero-repet[escolha-1])/double(escolha) );
    numero = (numero-repet[escolha-1]-n)%(x/N*(escolha-1));
    if( numero==0 )
        numero = repet[escolha-1];
    else
        numero += repet[escolha-2]; 
    return tocamusica(numero,escolha-1);

}
int tamanho(int numero){
    int valor = 1;
    while (numero > repet[valor++])
    {
        
    }
    return valor-1;
    
}
int main(){
    while ((scanf("%d%d",&N,&Q) == 2) && (N || Q)){
        if(N > 1){
            long long somatorio = 0;
            int cont = 0;
            while(somatorio <= 100000000){
                somatorio += pow(double(N),cont)*(cont);
                repet[cont] = somatorio;
                ++cont;
            }
            for (int i = 0; i < N; i++)
            {
                cin >> musica[i];
            }
            int escolha;
            for (int j = 0; j < Q; j++)
            {
                cin >> escolha;
                cout << tocamusica(escolha, tamanho(escolha)) << endl;
            }
            
            
        } 
        else{
            cin >> musica[0];
            int escolha;
            for (int k = 0; k < Q; k++)
            {
                cin >> escolha;
                cout << musica[0] << endl;
            }
            
        }       
        printf("\n");
    }
    
    return 0;
}