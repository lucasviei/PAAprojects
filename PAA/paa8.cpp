#include <bits/stdc++.h>

using namespace std;

int n;
int venda[1005];
int compri[1005];
int lucromax[1005][2005];

int cortacano(int i, int t)
{

    if (i == n)
        return 0;
    
    if (t == 0)
        return 0;
    
    if (t < 0)
        return INT_MIN;

    if (lucromax[i][t] == -1)
        lucromax[i][t] = max(cortacano(i + 1, t), venda[i] + cortacano(i, t - compri[i]));

    return lucromax[i][t];

}

int main()
{
    int t;

    while (scanf("%d %d", &n, &t) != EOF)
    {

        for(int i = 0; i < n; ++i)
            scanf("%d %d", &compri[i], &venda[i]);

        memset(lucromax, -1, sizeof(lucromax));
        printf("%d\n", cortacano(0, t));

    }

    return 0;

}