#include <iostream>

using namespace std;

int main()
{
    int N, X, A;
    cin >> N >> X;
    
    for( size_t i = 0 ; i < N ; i++ )
    {
        cin >> A;
        if( A < X )
        {
            cout << A << " ";
        } // if()
    } // for()

    return 0;
} // main()