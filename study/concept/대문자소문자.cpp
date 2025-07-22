대문자 A의 아스키 코드 값은 65, 소문자는 97
대문자 Z의 아스키 코드 값은 90, 소문자는 122

1. 아스키 코드 값의 차이는 32

대문자 -> 소문자
대문자 A에서 32를 더해주기

소문자 -> 대문자
소문자 a에서 32를 빼주기


2. toupper, tolower

헤더 : <cctype> 또는 <ctype.h>

형식 : char 대문자 = toupper(char 소문자);

#include <iostream>
#include <cctype> // toupper

int main() {
    char ch = 'a';
    std::cout << toupper(ch) << std::endl; // 'A'
    std::cout << toupper('z') << std::endl; // 'Z'
    std::cout << toupper('G') << std::endl; // 'G' (대문자는 그대로)
	std::cout << tolower('A') << std::endl; // 'a' (대문자를 소문자로)
}

3. transform

헤더 : <algorithm>

형식 : transform(시작, 끝, 결과_저장_위치, 변환함수);

#include <iostream>
#include <string>
#include <algorithm> // transform
#include <cctype>    // toupper

int main() {
    std::string str = "AbCdEfG";
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    // str의 각 문자에 toupper를 적용하여 str에 저장
    std::cout << str << std::endl; // "ABCDEFG"
}

설명:

str.begin(), str.end() : 변환할 범위

str.begin() : 변환 결과를 어디에 저장할지(여기선 자기 자신에 덮어쓰기)

::toupper : 각 원소에 적용할 함수(여기서는 대문자로 바꾸는 함수)

::toupper에서::는 전역함수임을 명시(가끔 네임스페이스 문제 피하려고 씀)


실제 변환 코드 예시
1 반복문 + toupper

std::string str = "HelloWorld";
for (int i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
}


2 transform + toupper

#include <algorithm>
#include <cctype>

std::string str = "HelloWorld";
std::transform(str.begin(), str.end(), str.begin(), ::toupper);







-toupper: 문자(char) 1개를 대문자로 변환, 반복문과 같이 사용
- transform : 컨테이너(문자열, 벡터 등) 전체에 변환 함수 적용, 한 줄로 처리 가능
- 문자열을 대문자로 : transform(str.begin(), str.end(), str.begin(), ::toupper)
- 헤더 : <algorithm>, <cctype>


충돌하는 경우(toupper 앞에 :: 을 붙이는 이유)

#include <iostream>
#include <string>
#include <algorithm> // transform
#include <cctype>    // toupper

using namespace std;

// 1. 사용자 정의 toupper
int toupper(int x) {
    cout << "사용자 정의 toupper 호출됨!" << endl;
    return x + 1;
}

int main() {
    string str = "AbCdEfG";

    // 2. 전역(::)을 붙이면 C표준 toupper만 쓴다!
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    // => 이 때는 진짜로 대문자 변환됨

    cout << str << endl; // "ABCDEFG"
}

그냥 toupper를 쓰면 내가 만든 사용자 함수가 호출됨(문자 변환이 아님)

::toupper를 쓰면 C표준 라이브러리 함수가 호출돼서 실제 대문자로 변환


