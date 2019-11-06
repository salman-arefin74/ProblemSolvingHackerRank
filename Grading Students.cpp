#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int main()
{
    int n;
    int i,j,k;
    int marks, rem;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &marks);
        if(marks > 37){
            rem = marks % 5;
            if(rem > 2){
                marks = marks + (5-rem);
                printf("%d\n", marks);
            }
            else{
                printf("%d\n", marks);
            }
        }
        else{
            printf("%d\n", marks);
        }
    }    

    return 0;
}


