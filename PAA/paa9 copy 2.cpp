#include <bits/stdc++.h>

using namespace std;

int final = 1;
int d[100001], p[100001];
int main(){
    int n;
    memset(d, -1, sizeof(d));
    memset(p, -1, sizeof(p));   
    while(scanf("%d",&n) != EOF){
        priority_queue <int> processamento;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &d[i], &p[i]);
            processamento.push(p[i]);
        }
        while(processamento.size() != 0){
            final += processamento.top();
            processamento.pop();
        }
        cout << final << endl;
        final = 1;
    }
    return 0;
}