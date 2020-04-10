#include <bits/stdc++.h>

using namespace std;

int final = 1;
int contator = 0;
int d[100001], p[100001];
int main(){
    int n;
    memset(d, -1, sizeof(d));
    memset(p, -1, sizeof(p));    
    while(scanf("%d",&n) != EOF){
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &d[i], &p[i]);
        }       
        while (contator != n)
        {   
            final++;
            p[contator]--;
            if(p[contator] == 0){
                ++contator;
            }
            if(d[contator] == 0){
                break;
            }
        }
        cout << final << endl;   
        contator = 0;
        final = 1;
    }
    return 0;
}