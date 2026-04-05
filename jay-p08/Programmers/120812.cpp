#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> Map;
    int answer = -1;
    int Max_Value = -1;
    bool Is_Duplicate = false;

    for( int n : array )
    {
        ++Map[ n ];
    } // for()

    
    for( const auto& p : Map )
    {
        if( p.second > Max_Value )
        {
            Max_Value = p.second;
            answer = p.first;
            Is_Duplicate = false;
        } // if()
        else if( Max_Value == p.second )
        {
            Is_Duplicate = true;
        } // if()
    } // for()

    return Is_Duplicate ? -1 : answer;
} // solution()