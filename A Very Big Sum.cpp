#include <iostream>

using namespace std;

int main()
{
    int i, n;
    long long int sum = 0;
    
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%lli\n", sum);
    
    
}

