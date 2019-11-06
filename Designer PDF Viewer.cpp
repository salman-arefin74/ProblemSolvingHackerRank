#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n;
    char str[100];
    int arr[27];
    for(i=0; i<26; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%s", str); 
    n = strlen(str);
    int temp[n];
    int yoo;
    for(i=0; i< n; i++){
        yoo = int(str[i]) - 97 ;
        temp[i] = arr[yoo];
    }
    int max= temp[0];
    for(i=0; i<n; i++){
        if(max < temp[i]){
            max = temp[i];
        }
    }
    int res = max*n;
    printf("%d", res);
}
