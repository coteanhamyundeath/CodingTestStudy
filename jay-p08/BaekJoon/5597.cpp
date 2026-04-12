#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> answer;
    vector<int> int_Vector;
    int n;

    while( cin >> n )
    {
        int_Vector.push_back(n);
    } // while()

    for ( int i = 1; i <= 30; i++ )
    {
        if ( find(int_Vector.begin(), int_Vector.end(), i) == int_Vector.end() )
        {
            answer.push_back(i);
        } // if()
    } // for()

    for( auto i : answer )
    {
        cout << i << endl;
    } // for()
} // main()