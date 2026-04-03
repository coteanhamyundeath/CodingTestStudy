#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> Vector( N, 0 );
    
    for( size_t I = 0 ; I < M ; I++ )
    {
        int i, j, k;
        cin >> i >> j >> k;

        for( size_t J = i ; J <= j ; J++ )
        {
            Vector[ J - 1] = k;
        } // for()
    } // for()

    for( size_t I = 0 ; I < N ; I++ )
    {
        cout << Vector[ I ] << " ";
    } // for()

    return 0;
} // main()