#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> int_Vector( N );
    iota( int_Vector.begin(), int_Vector.end(), 1 );

    for( size_t s = 0 ; s < M ; s++ )
    {
        int i, j;
        cin >> i >> j;

        reverse( int_Vector.begin() + ( i - 1 ), int_Vector.begin() + j );
    } // for()
    
    for( auto i : int_Vector )
    {
        cout << i << " ";
    } // for()
} // main()