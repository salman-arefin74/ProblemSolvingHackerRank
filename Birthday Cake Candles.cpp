#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,c;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max;
    max = arr[0];
    for(i=1; i<n; i++){
        //scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(i=0; i<n; i++){
        //scanf("%d", &arr[i]);
        if(arr[i] == max){
            c++;
        }
    }
    printf("%d\n", c);

    
    return 0;
}

