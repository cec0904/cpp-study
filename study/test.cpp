#include <string>
#include <vector>

using namespace std;

string solution(string email) {
    string answer = "";
    bool flag = true;

    for (int i = 0; i < email.size(); i++)
    {
        if (email[i] == '@')
        {
            flag = true;
            email[i - 2] += '*';
        }
        else


    }



    return answer;
}