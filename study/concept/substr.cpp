1. 정의와 개념
* *substr * *는 C++의 std::string 클래스에 포함된 멤버 함수.

기능: 문자열에서 일부 구간(부분 문자열, substring)을 잘라서 새로운 문자열 객체로 반환한다.

원본 문자열에는 변화 없음(비파괴적).
* 주로 문자열의 특정 부분을 추출하거나, 슬라이싱(slicing)할 때 사용된다.

2. 기본 문법

string substr(size_t pos = 0, size_t len = npos) const;
pos: 시작 인덱스(0부터 시작, 기본값 0)

len : 추출할 길이(기본값 npos = 끝까지)

리턴값 : 새롭게 생성된 부분 문자열(string 객체)

예시

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcdef";
    cout << s.substr(2, 3) << endl;  // "cde"
    cout << s.substr(0, 2) << endl;  // "ab"
    cout << s.substr(3) << endl;     // "def" (끝까지)
    cout << s.substr(0, 100) << endl;// "abcdef" (범위 넘어가도 에러 X)
}



3. 동작 원리 및 특징
새로운 string 객체가 반환됨(원본은 그대로).

pos가 문자열 길이보다 크면 out_of_range 예외 발생(에러, 런타임 종료).

len이 남은 문자열보다 커도 자동으로 끝까지 반환.

len을 0으로 하면 ""(빈 문자열) 반환.

예외 상황
pos > s.size() : 예외(std::out_of_range) 발생 → 프로그램 종료 주의!


string s = "abc";
s.substr(10); // 예외 발생
len은 안전함 : 길이 초과해도 에러 안 남.




4. 다양한 활용법 / 패턴
1) 앞에서 일정 부분만 추출

string s = "2025-07-31";
string year = s.substr(0, 4); // "2025"
2) 뒤에서 일정 부분 추출

string s = "12345678";
string last4 = s.substr(s.size() - 4, 4); // "5678"
3) 중간에서 추출

string s = "abcdef";
string mid = s.substr(2, 2); // "cd"
4) split과 비슷하게 사용
문자열에서 구분자를 찾아서 부분 추출


string email = "abcd@naver.com";
size_t at = email.find('@');
string id = email.substr(0, at);     // "abcd"
string domain = email.substr(at + 1);  // "naver.com"




5. 실제로 많이 쓰는 예제
1) 마스킹

string phone = "01012345678";
string masked = string(phone.size() - 4, '*') + phone.substr(phone.size() - 4);
// "*******5678"
2) 문자열 반 나누기

string s = "abcdef";
int mid = s.size() / 2;
string left = s.substr(0, mid);
string right = s.substr(mid);
// left: "abc", right: "def"
3) 확장자 분리

string filename = "report.pdf";
size_t dot = filename.rfind('.');
string ext = (dot != string::npos) ? filename.substr(dot + 1) : "";
// ext: "pdf"




6. 응용: substr + find / erase / replace
find : 특정 패턴 / 문자 찾고, substr로 잘라내기.

erase : substr로 추출해서 필요한 부분만 남기기.

replace : substr로 앞뒤 / 중간을 추출해서 조합 후 새로운 문자열 만들기.




7. 주의할 점
index는 항상 0부터(Python이랑 비슷).

pos를 넘어서면 무조건 런타임 에러 → 항상 범위 체크하자.

string::npos : unsigned long long의 최대값(일반적으로 - 1로 세팅됨).

string이 empty("")일 때 substr(0, 0)은 ""반환(에러 안남).

8. STL 관련 substr 예시
vector<string>에서 부분 문자열 추출

sort, set, map의 key로 부분 문자열 사용

for문에서 substr로 슬라이딩 윈도우 구현

9. 실전 문제에서 자주 활용되는 패턴
주민번호 뒷자리 / 앞자리 분리

날짜, 시간 파싱

문자열 마스킹, 개인정보 보호

split 구현(구분자로 분리 → find, substr 조합)

슬라이딩 윈도우 문제(문자열의 모든 부분 문자열 추출)

10. substr과 비슷한 함수
std::string_view의 substr(C++17~)

Python의 슬라이싱(s[2:5] ← C++에선 s.substr(2, 3))

C의 strncpy와 비슷한 역할

11. substr 성능 / 시간복잡도
O(len) : 부분 문자열을 새로 복사해서 반환 → 매우 큰 문자열 반복 사용시 성능 유의

매우 자주 쓰면 string_view로 최적화 고려(복사 안 함)

12. FAQ & 실수하는 포인트
Q : substr(시작, 0)은 뭐가 나와 ?

A : 항상 빈 문자열 반환

Q : substr의 리턴값은 string인가 ?

A : 네, 항상 string 객체(복사본)로 반환됨

Q : substr의 인덱스 범위가 벗어나면 ?

A : pos가 범위 밖이면 에러, len은 상관 없음

