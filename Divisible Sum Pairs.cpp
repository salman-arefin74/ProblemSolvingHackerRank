#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,p;
    int n,k;
    int count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            sum = arr[i] + arr[j];
            if(sum%k == 0){
                count++;
            }
            sum = 0;
        }
    }
    printf("%d", count);
}
