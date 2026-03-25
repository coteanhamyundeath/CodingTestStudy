#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << ( A == B ? ( A == C ? 10000 + ( A * 1000 ) : 1000 + ( A * 100 ) ) : A == C ? 1000 + ( A * 100 ) : ( B == C ? 1000 + ( B * 100 ) : max( { A, B, C } ) * 100 ) ) << endl;

    return 0;
}