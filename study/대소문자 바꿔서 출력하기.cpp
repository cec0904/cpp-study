#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) { 
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // 대문자 → 소문자
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // 소문자 → 대문자
        }
    }

    cout << str;

    return 0;
}

// 10. 문자열의 길이만큼 문자 하나씩 반복한다
// str.size() 나 str.length() 를 써도 관계없다
// 
// 11. str[i] -> 현재 문자
// 만약 현재 문자가 대문자 라면 아스키 코드 기준으로 32를 더해라
// 
// >= 크거나 같다 <= 작거나 같다 && 두 조건이 모두 참일 때 참
// 
// 자주쓰는 부호 요약표 - 조건문.cpp 87번째줄
// 
// 
// 
// 
// 
// 14. 마찬가지로 소문자라면 32를 빼라
// 
// str[i] = str[i] + 32;
//  -> str[i] += 32; 로 해도 된다
// 
// 
//


