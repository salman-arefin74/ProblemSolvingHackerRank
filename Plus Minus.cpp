#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i,j;
    scanf("%d", &n);
    double p=0,neg=0,z=0;

    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        if(arr[i] > 0)
            p++;
        if(arr[i] < 0)
            neg++;
        if(arr[i] == 0)
            z++;
    }
    printf("%lf\n", p/n);
    printf("%lf\n", neg/n);
    printf("%lf\n", z/n);


}
