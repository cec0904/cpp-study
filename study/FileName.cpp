#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    string ab = to_string(a) + to_string(b);
    int ab_num = stoi(ab);

    if (ab_num > (2 * a * b)) {
        answer += stoi(ab);
    }
    else if (ab < (2 * a * b)) {
        answer += 2 * a * b;
    }
    else {
        answer += stoi(ab);
    }


    return answer;
}