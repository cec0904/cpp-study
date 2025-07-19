if (answer.size() < 3) {
    answer += "o";
}

answer 가 4보다 작으면 소문자 o를 뒤에 붙여 4가 될때까지 만들기
입력 예 : GK
출력 예 : GKoo

잘못된 방법(내가 한거) : if (answer.size() < 3) {
    for (int i = 0; i < answer.size(); i++) { answer += "o"; }
}

이유 : for 루프의 조건이 잘못됨
answer = "GK" 일 때:
answer.size()=2
-> for (int i = 0; i < 2; i++)
첫 루프 -> answer += "o" → "GKo" (size : 3)
두 번째 루프 -> answer += "o" → "GKoo" (size : 4)

 문제점 1: 조건이 처음 길이에 고정됨
for (int i = 0; i < answer.size(); i++)에서
    answer.size()는 반복 중에 계속 커지는데, i는 1씩 증가만 함.

    따라서 어떤 상황에서는 i가 answer.size()보다 작지 않게 되어 의도보다 적게 반복할 수도 있고,

    반대로 answer.size()가 변하면서 예상과 다른 반복 횟수가 될 수도 있어요.

    예를 들어 answer = "A"면:

처음 size = 1 → i < 1 → 딱 한 번만 반복 → "Ao" (원하는 "Aooo" 아님)

 문제점 2 : 반복 횟수가 정해져 있지 않음
    문자열 길이를** 목표값(예 : 4)** 으로 명확히 맞춰야 하는데,

    지금 로직은 "현재 길이만큼 반복"이라서, 목표에 도달하는지 보장하지 않음.


     올바른 해결 방법
방법 1: while 루프(가장 직관적)
while (answer.size() < 4) {
        answer += "o";
    }

조건이 true 인 동안 반복해서 코드 실행

조건이 false가 되면 반복 종료




방법 2: string 생성자로 필요한 만큼 한 번에 붙이기

if (answer.size() < 4) {
    answer += string(4 - answer.size(), 'o');
}




C++에서 for문의 간격(또는 증감식)은 반복문이 실행될 때마다 변수 값을 변경하는 부분입니다.일반적으로 i++ (1씩 증가), i-- (1씩 감소), i += 2 (2씩 증가) 와 같이 사용됩니다.간격을 조정하여 반복 범위를 제어할 수 있습니다.

기본 형태 :
for (초기화식; 조건식; 증감식) {
    // 반복할 코드
}

예시:
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = 0; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}

