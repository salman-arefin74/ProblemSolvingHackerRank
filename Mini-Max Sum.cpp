#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;
    int arr[5];
    int max, min;
    long int res[2];
    long int maxsum = 0, minsum = 0;
    int temp;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; ++i){
        for (j = i + 1; j < 5; ++j){
            if (arr[i] > arr[j]){
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=1; i<5; i++){
        minsum += arr[i];
    }

    for(i=0; i<4; i++){
        maxsum += arr[i];
    }
    res[0] = maxsum;
    res[1] = minsum;

    for(i=0; i<2; i++){
        printf("%ld ", res[i]);
    }

    return 0;
}

