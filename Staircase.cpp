#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int i,j,k;
    scanf("%d", &n);
    i = 1;
    while(i!=n){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        for(j=0; j<i; j++)
            printf("#");
        i++;
        printf("\n");
    }
    for(k=0; k<n; k++){
        printf("#");
    }
}
