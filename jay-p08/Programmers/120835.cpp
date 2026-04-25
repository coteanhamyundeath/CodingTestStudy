#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted_emergency = emergency;

    sort(sorted_emergency.begin(), sorted_emergency.end(), greater<int>());
    for( auto i : emergency )
    {
        answer.push_back(find(sorted_emergency.begin(), sorted_emergency.end(), i) - sorted_emergency.begin() + 1);
    } // for()
    
    return answer;
}