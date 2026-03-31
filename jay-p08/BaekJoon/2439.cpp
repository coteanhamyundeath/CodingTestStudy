#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;


    for( size_t i = 1 ; i <= N ; i++ )
    {
        for( size_t j = N - i ; j > 0 ; j-- )
        {
            cout << " ";
        } // for()
        for( size_t j = 0 ; j < i ; j++ )
        {
            cout << "*";
        } // for()
        cout << endl;
    } // for()

    return 0;
} // main()