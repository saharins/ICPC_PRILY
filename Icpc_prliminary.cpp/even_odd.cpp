#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) 
    {
        ll N;
        int P;
        cin >> N >> P;
        string winner = (P == 1) ? "Evenius" : "Oddius";

        cout << "Case " << t << ": " << winner << endl;
    }
    
    return 0;
}