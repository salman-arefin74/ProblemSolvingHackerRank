#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared = 5;
    int liked;
    int cumulative = 2;

    for(int i=1; i<n; i++){
        shared = floor(shared/2)*3;
        liked = floor(shared/2);
        cumulative += liked;         
    }
    return cumulative;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
