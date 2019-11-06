#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,t;
    int a,b;
    int m,n;
    int appc = 0, orgc = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    
    int apple[m], orange[n];
    int i,j,k;

    for(i=0; i<m; i++){
        scanf("%d", &apple[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d", &orange[i]);
    }
    for(i=0; i<m; i++){
        apple[i] = apple[i] + a;    
    }
    for(i=0; i<n; i++){
        orange[i] = orange[i] + b;    
    }
    for(i=0; i<m; i++){
        if(apple[i]>=s && apple[i] <= t){
            appc++;
        }    
    }
    for(i=0; i<n; i++){
        if(orange[i]>=s && orange[i] <= t){
            orgc++;
        }    
    }

    printf("%d\n", appc);
    printf("%d\n", orgc);

    return 0;
}
