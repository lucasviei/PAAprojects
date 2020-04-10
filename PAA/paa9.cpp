#include <bits/stdc++.h>

using namespace std;



int final = 1;
struct fila{
    int disponibilidade;
    int processamento;
    bool operator<(const fila& rhs) const{
        return (disponibilidade > rhs.disponibilidade);
    }
}producao[100001];

void showpq(priority_queue <struct fila> gq) 
{ 
    priority_queue <struct fila> g = gq; 
    while (!g.empty()) 
    { 
        cout << g.top().disponibilidade;
        cout << '\t';
        cout << g.top().processamento; 
        cout << '\n';
        g.pop(); 
    } 
    cout << '\n'; 
}
int main(){
    int n; 
    while(scanf("%d",&n) != EOF){
        priority_queue <struct fila> processamento;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &producao[i].disponibilidade, &producao[i].processamento);
            processamento.push(producao[i]);
        }
        while(processamento.size() != 0){
            if((final - processamento.top().disponibilidade) >= 0){
                final += processamento.top().processamento;
                processamento.pop();
            }else{
                final += processamento.top().processamento + (processamento.top().disponibilidade - final);
                processamento.pop();
            }
        }
        cout << final << endl;
        final = 1;
    }
    return 0;
}