#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int n = num_list.back();
    int m = num_list[num_list.size() - 2];

    for (int i = 0; i < num_list.size(); i++) {
        if (n > m) {
            num_list.push_back(n - 1);
        }
        else {
            num_list.push_back(n * 2);
        }
    }



    return answer;
}