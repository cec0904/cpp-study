#include <iostream>
#include <string>

using namespace std;

//
// 
// 
// 
// 
// 
// string 은 문자 여러개가 모인 것(문자열)



//문자열 붙이기(+)도 가능함
//예1:

string s1 = "12";
string s2 = "34";
string s3 = s1 + s2; // "1234"


//to_string(): 숫자 -> 문자열
//예1:

int a = 12;
string s = to_string(a); //"12"

//stoi():문자열 -> 정수(string to integer)
// 문자열이 숫자로만 구성돼 있어야 함
// 123 o 12a x
//예1:

string s = "123";
int n = stoi(s);// 123 (int 타입)


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
    else if (ab_num < (2 * a * b)) {
        answer += 2 * a * b;
    }
    else {
        answer += stoi(ab);
    }


    return answer;
}




#include <string>       // 문자열 관련 함수를 사용하기 위해 포함
#include <vector>       // 벡터 자료형 사용을 위해 포함

using namespace std;    // 표준 네임스페이스를 사용 (std:: 생략)

int solution(vector<int> num_list) {      // 정수 벡터 num_list를 받아 처리하는 함수 선언
    int answer = 0;                       // 최종적으로 반환할 변수 answer를 0으로 초기화

    string a_str = "";  // 홀수 문자열
    // 홀수 숫자들을 이어붙여 문자열로 만들 변수 a_str을 빈 문자열로 초기화
    string b_str = "";  // 짝수 문자열
    // 짝수 숫자들을 이어붙여 문자열로 만들 변수 b_str을 빈 문자열로 초기화

    for (int i = 0; i < num_list.size(); i++) {  // num_list의 모든 원소를 하나씩 확인
        if (num_list[i] % 2 == 1) {              // 해당 숫자가 홀수이면
            a_str += to_string(num_list[i]);     // a_str에 그 숫자를 문자열로 변환하여 이어붙임
        }
        else {                                 // 해당 숫자가 짝수이면
            b_str += to_string(num_list[i]);     // b_str에 그 숫자를 문자열로 변환하여 이어붙임
        }
    }

    // 예) a_str = "531", b_str = "8"

    int a = stoi(a_str); // a_str에 이어붙인 문자열을 정수로 변환하여 a에 저장 ("531" → 531)
    int b = stoi(b_str); // b_str에 이어붙인 문자열을 정수로 변환하여 b에 저장 ("8" → 8)

    answer = a + b;      // a와 b를 더한 결과를 answer에 저장 (531 + 8 = 539)

    return answer;       // 최종 결과를 반환
}


string a_str = ""; 는 왜 0으로 초기화하지 않는지 ?

a_str는 문자열(string) 자료형이에요.

string은 내부적으로는 문자의 배열(문자열 객체) 형태로 구현되어 있습니다.

C++에서 string을 선언할 때 :

빈 문자열("")로 초기화하면 내용이 없다는 뜻이고, 메모리 상에서 크기가 0인 문자열이 됩니다.

정수형(int, double 등)처럼 0으로 초기화하는 것이 아니라, 빈 문자열로 초기화하는 것이 일반적입니다.

만약 string a_str = 0; 처럼 쓰면

타입이 맞지 않아 컴파일 에러가 발생합니다.



string 타입에서 += 연산자는 "숫자처럼 더하기"가 아니라 뒤에 이어붙이는 역할을 합니다.

a_str += "5"; 라고 하면 a_str에 "5"라는 문자열이 뒤에 이어붙습니다.

예: a_str = "53"이고 "1"을 더하면 → a_str = "531"

즉, 기존의 문자열 뒤에 새로운 문자열을 덧붙이는 것(문자열 연결, Concatenation)입니다.


예외처리하기

int a = stoi(a_str); 
int b = stoi(b_str);


int a = a_str.empty() ? 0 : stoi(a_str);
int b = b_str.empty() ? 0 : stoi(b_str);

a_str.empty()가 true면(즉 a_str가 비어있으면) 0을 반환하고
아니면 stoi(a_str)을 반환합니다.

a_str에는 적어도 하나의 홀수가 있다면 값이 들어있습니다.

주어진 예시({ 5,3,1,8 })에서는 홀수가 반드시 존재하기 때문에, 
a_str.empty()가** 거짓(false)** 가 되어 stoi(a_str)가 실행됩니다.

즉, 지금 상황에서는 a_str.empty()가 참이 되는 상황이 잘 나오지 않아요.

하지만

안정장치 역할을 한다는 점

만약에 num_list가 전부 짝수({ 2,4,6,8 })라면:
a_str.empty()는 true가 되어서 stoi(a_str) 호출을 피할 수 있음
그렇지 않으면 stoi("")가 호출되면서 런타임 에러가 발생함

stoi(a_str)를 호출하기 전에 a_str이 비었는지 확인해주는 코드가 
오류를 방지해주는 역할을 합니다.
