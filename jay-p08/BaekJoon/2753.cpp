#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;

    cout << ( A % 4 == 0 && ( A % 100 != 0 || A % 400 == 0 ) ? "1" : "0" ) << endl;

    return 0;
} // main()