#include <iostream>

using namespace std;

int main()
{
    int A, B;

    tryAgain :
        cin >> A >> B;

    if( A + B != 0 )
    {
        cout << A + B << endl;
        goto tryAgain;
    }

    return 0;
} // main()