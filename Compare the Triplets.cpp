#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int a[3], b[3], res[2] = {0};
    
    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<3; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<3; i++){
        if(a[i] > b[i]){
            res[0]++;
        }
        else if(a[i] < b[i]){
            res[1]++;
        }
    }
    for(i=0; i<2; i++){
        printf("%d ", res[i]);
    }
    
}
