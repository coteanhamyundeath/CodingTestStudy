#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for( size_t i = 0 ; i < N / 4 ; i++ )
    {
        cout << "long ";
    } // for()
    cout << "int" << endl;
    
    return 0;
}