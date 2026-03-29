#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, A;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    cin >> N;
    
    for( size_t i = 0 ; i < N ; i++ )
    {
        cin >> A;
        
        min_val = min(min_val, A);
        max_val = max(max_val, A);
    } // for()

    cout << min_val << " " << max_val;

    return 0;
} // main()