#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j, n;
    int sum1 = 0, sum2 = 0;
    int diff;

    scanf("%d", &n);
    int arr[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            // Condition for principal diagonal 
            if (i == j) 
                sum1 += arr[i][j]; 
  
            // Condition for secondary diagonal 
            if ((i + j) == (n - 1)) 
                sum2 += arr[i][j]; 
        }
    }
    diff = sum1 - sum2;
    printf("%d\n", abs(diff));

}
