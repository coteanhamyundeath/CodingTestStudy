#include <iostream>

using namespace std;

int main()
{
    int Fee, Number;
    cin >> Fee >> Number;

    for ( size_t i = 0 ; i < Number; i++ )
    {
        int Price, Count;
        cin >> Price >> Count;
        Fee -= Price * Count;
    } // for()

    if( Fee == 0 )
    {
        cout << "Yes";
    } // if()
    else
    {
        cout << "No";
    } // else()

    return 0;
} // main()