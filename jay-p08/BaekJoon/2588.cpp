#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    for( size_t i = A.length() ; i > 0; i-- )
    {
        int sum = 0;
        sum = stoi( A ) * ( B[ i - 1 ] - '0' );

        cout << sum << endl;
    } // for()
    cout << stoi( A ) * stoi( B ) << endl;

    return 0;
} // main()