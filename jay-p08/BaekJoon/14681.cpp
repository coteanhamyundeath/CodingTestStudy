#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << ( A > 0 ? ( B > 0 ? "1" : "4" ) : ( B < 0 ? "3" : "2" ) ) << endl;

    return 0;
} // main()