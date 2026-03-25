#include <iostream>

using namespace std;

int main(){
    int H, M, Total;
    cin >> H >> M;

    Total = H * 60 + M - 45;

    if( Total < 0 ) 
    {
        Total += 1440;
    } // if()

    cout << Total / 60 << " " << Total % 60 << endl;
}