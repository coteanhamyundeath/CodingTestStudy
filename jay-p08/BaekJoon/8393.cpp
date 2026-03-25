#include <iostream>

using namespace std;

int main(){
    int N, S = 0;
    cin >> N;

    for( size_t i = 1 ; i <= N ; i++ )
    {
        S += i;
    } // for()
    cout << S << endl;
    
    return 0;
}