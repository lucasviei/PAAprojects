#include<bits/stdc++.h>

using namespace std;


int main(){
    int casosDeTeste;
    int disponiveis;
    cin >> casosDeTeste;
    int contador = 0;
    int arsenal[55][105];
    int hit, carga; 
    while (contador < casosDeTeste)
    {
        cin >> disponiveis;
        for (int i = 0; i < disponiveis; i++)
        {
            arsenal[i][0] = 0;
        }
        for (int j = 0; j < 101; j++)
        {
            arsenal[0][j] = 0;
        }
        for (int k = 1; k < disponiveis+1; k++)
        {
            cin >> hit >> carga;
            for (int z = 0; z < 102; z++)
            {
                if(z < carga){
                    arsenal[k][z] = arsenal[k-1][z];
                }
                else{
                    arsenal[k][z] = max(arsenal[k-1][z],arsenal[k-1][z-carga]+hit);
                }
            }
            
        }
        int capacidade, resistencia;
        cin >> capacidade >> resistencia;
        if(arsenal[disponiveis][capacidade] >= resistencia){
            cout << "Missao completada com sucesso" << endl;
        }else{
            cout << "Falha na missao" << endl; 
        }
        
          
            
        ++contador;
    }
    
    return 0;
}