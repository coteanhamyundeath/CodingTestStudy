#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string letter)
{
    string answer = "";
    unordered_map<string, string> morse = {
        {".-", "a"},
        {"-...", "b"},
        {"-.-.", "c"},
        {"-..", "d"},
        {".", "e"},
        {"..-.", "f"},
        {"--.", "g"},
        {"....", "h"},
        {"..", "i"},
        {".---", "j"},
        {"-.-", "k"},
        {".-..", "l"},
        {"--", "m"},
        {"-.", "n"},
        {"---", "o"},
        {".--.", "p"},
        {"--.-", "q"},
        {".-.", "r"},
        {"...", "s"},
        {"-", "t"},
        {"..-", "u"},
        {"...-", "v"},
        {".--", "w"},
        {"-..-", "x"},
        {"-.--", "y"},
        {"--..", "z"}
    };

    vector<string> letters = {};
    string current = "";
    for (int i = 0; i < letter.length(); i++) {
        if (letter[i] == ' ') {
            letters.push_back(current);
            current = "";
        } else {
            current += letter[i];
        }
    }
    letters.push_back(current);

    for (const auto& l : letters) {
        answer += morse[l];
    }

    return answer;
}