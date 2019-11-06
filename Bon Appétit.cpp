#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int i,j,b;
    scanf("%d %d", &n, &k);
    int bill[n];
    for(i=0; i<n; i++){
        scanf("%d", &bill[i]);
    }
    scanf("%d", &b);
    int sum=0;
    for(i=0; i<n; i++){
        if(i != k){
            sum += bill[i];
        }
    }
    int rem = sum/2;
    int rem2;
    if(rem == b){
        printf("Bon Appetit");
    }
    else{
        rem2 = b - rem;
        printf("%d", rem2); 
    }
}
