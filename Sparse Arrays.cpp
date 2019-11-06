#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;

    int n,q;
    cin >> n;
    string strings[n];
    for(i=0; i<n; i++){
        cin >> strings[i];
    }
    cin >> q;
    string queries[q];
    for(i=0; i<q; i++){
        cin >> queries[i];
    }
    int res[q] = {0};

    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            if(strings[i] == queries[j]){
                res[j]++;
            }
        }
    }
    for(i=0; i<q; i++){
        printf("%d\n", res[i]);
    }



    return 0;
}
