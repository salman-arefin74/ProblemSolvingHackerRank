#include <bits/stdc++.h>

using namespace std;


int main()
{
    int i,j,k;
    int temp =0, count=0;
    int n;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    for(i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            temp++;
            arr[i+1]=-1;
        }
    }
    printf("%d", temp);
}
