#include <iostream>

using namespace std;

int main()
{
    int H, M, TM, Total;
    cin >> H >> M >> TM;

    Total = ( H * 60 ) + M + TM;

    cout << ( Total / 60 ) % 24 << " " << Total % 60 << endl;

    return 0;
}