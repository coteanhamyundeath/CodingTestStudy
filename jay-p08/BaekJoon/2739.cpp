#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for( size_t i = 1 ; i < 10 ; i++ )
    {
        cout << N << " * " << i << " = " << N * i << endl; 
    } // for()

    return 0;
}