#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> Vector( N );
    iota( Vector.begin(), Vector.end(), 1 );

    for( size_t i = 0 ; i < M ; i++ )
    {
        int I, J;
        cin >> I >> J;

        int temp;
        swap( Vector[ I - 1 ], Vector[ J - 1 ] );
    } // for()

    for( auto i : Vector ) cout << i << " ";

    return 0;
} // main()