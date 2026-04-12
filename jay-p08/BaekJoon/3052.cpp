#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> int_Vector;
    int n;

    for( size_t i = 0 ; i < 10 ; i++ )
    {
        cin >> n;
        int a = n % 42;
        if( find( int_Vector.begin(), int_Vector.end(), a ) == int_Vector.end() )
            int_Vector.push_back( a );
    } // for()
    
    cout << int_Vector.size();
} // main()