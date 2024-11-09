#include <bits/stdc++.h>
using namespace std;

long long cal_Wtr(long long K, long long X, long long Y) 
{
    return K / max(X, Y); 
}

int main() 
{
    int T;
    cin >> T; 
    for (int t = 1; t <= T; t++) 
    {
        int N;
        long long K;
        cin >> N >> K;
        
        long long t_Wtr = 0;
        for (int i = 0; i < N; i++) 
        {
            long long X, Y;
            cin >> X >> Y;
            
            t_Wtr += cal_Wtr(K, X, Y);
        }
        cout << "Case " << t << ": " << t_Wtr << endl;
    }
    
    return 0;
}
