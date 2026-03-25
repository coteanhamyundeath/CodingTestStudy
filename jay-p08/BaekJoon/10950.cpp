#include <iostream>

using namespace std;

int main(){
    int N, A, B;
    cin >> N;

    for( size_t i = 0 ; i < N ; i++ )
    {
        cin >> A >> B;
        cout << A + B << endl;
    } // for()

    return 0;
}