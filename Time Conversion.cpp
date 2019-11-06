#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k;
    char str[20];
    char output[20];
    cin >> str;
    n = strlen(str);
    
    int h1 = (int)str[1] - '0'; 
    int h2 = (int)str[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10);

    if(str[8] == 'A'){
        if(hh == 12){
            cout << "00";
            for(i=2; i<n-2; i++){
                cout << str[i];
            }
        }
        else{
            for(i=0; i<n-2; i++){
                cout << str[i];
            }
        }
    }

    else if(str[8] == 'P'){
        if(hh == 12){
            //printf("00");
            for(i=0; i<n-2; i++){
                cout << str[i];
            }
        }
        else{
            hh = hh + 12;
            cout << hh;
            for(i=2; i<n-2; i++){
                cout << str[i];
            }
        }
    }
    return 0;
}
