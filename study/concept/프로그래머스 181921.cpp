#include <string>
#include <vector>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;    // 조건을 만족한 숫자들을 저장할 벡터

    for (int i = l; i <= r; i++) {  // l부터 r까지 모든 정수를 확인
        string s = to_string(i);    // 숫자를 문자열로 변환
        int j;

        // 문자열 s의 각 문자(숫자)들을 순회
        for (j = 0; j < s.size(); j++) {
            // 현재 문자가 '0'도 아니고 '5'도 아니라면
            if (s[j] != '0' && s[j] != '5') {
                break;  // 조건 불만족 → 즉시 for문 탈출
            }
        }

        // 위의 for문을 끝까지 돈 경우 (즉, 모든 문자가 '0' 또는 '5')
        if (j == s.size()) {
            answer.push_back(i);  // 배열에 숫자를 추가
        }
    }

    // 조건을 만족한 숫자가 하나도 없으면 -1 추가
    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;  // 결과 반환
}





#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        string s = to_string(i);

        // 0과 5만 포함하는 숫자인지 체크
        bool valid = true;
        for (char c : s) {
            if (c != '0' && c != '5') {
                valid = false;
                break;
            }
        }

        if (valid) {
            answer.push_back(i);
        }
    }

    // 만약 아무 값도 없다면 -1만 포함하도록
    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}



//
// 0과 5로만 이루어진 -> 0과 5로 이루어져 있지 않다면 포함시키지 말아라
// 
//