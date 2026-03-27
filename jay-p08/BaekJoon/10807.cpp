#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, Input, V;
    vector<int> Vector;
    cin >> N;
    
    for( size_t i = 0 ; i < N ; i++ )
    {
        cin >> Input;
        Vector.push_back( Input );
    } // for()
    cin >> V;

    cout << count( Vector.begin(), Vector.end(), V );

    return 0;
} // main()