#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;

    cout << ( A >= 90 ? "A" : ( A >= 80 ? "B" : ( A >= 70 ? "C" : ( A >= 60 ? "D" : "F" ) ))) << endl;

    return 0;
} // main()