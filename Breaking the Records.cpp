#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    int n;
    scanf("%d", &n);
    int score[n];
    int hs, ls;
    int hsc = 0, lsc = 0;
    
    for(i=0; i<n; i++){
        scanf("%d", &score[i]);
    }
    hs = score[0];
    ls = score[0];
    for(i=1; i<n; i++){
        if(score[i] > hs){
            hs = score[i];
            hsc++;
        }
        if(score[i] < ls){
            ls = score[i];
            lsc++;
        }
    }
    printf("%d %d", hsc, lsc);
    return 0;
}
