#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cin.tie( NULL );
    ios::sync_with_stdio( false );

    int A;
    int Max = INT_MIN;
    int Index = 0;

    for ( int i = 0 ; i < 9 ; i++ )
    {
        cin >> A;

        if ( A > Max )
        {
            Max = A;
            Index = i + 1;
        } // if()
    } // for()

    cout << Max << "\n" << Index;

    return 0;
} // main()