#include <iostream>

using namespace std;

int main()
{
    int i, n, sum;
    sum = 0;
    scanf("%d", &n);
    int ar[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + ar[i];
    }
    printf("%d\n", sum);
    
}

