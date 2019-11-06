#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int res;
    if(k >= max){
        res=0;
    }
    else{
        res = max - k;
    }
    printf("%d", res);
}
