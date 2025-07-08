#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    my_string = "apporoograpemmemprs";
    indices = { 1, 16, 6, 15, 0, 10, 11, 3 };

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] == indices[i])
        {
			answer += my_string[i];
        }

    }

    return answer;
}