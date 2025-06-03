#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;


    if (flag) {
        return a + b;
    }
    else {
        return a - b;
    }


    return answer;
}






1. bool 설명

bool = 불리언(boolean)
두 가지 중 하나의 값만 가질 수 있음

true(참)
false(거짓)

내부적으로는 0(flase)과 1(true) 로 동작

조건문, 반복문, 삼항 연산자에서 자주 쓰임

bool isAdult = true;
bool isEven = (n % 2 == 0); // 조건식 결과를 bool 변수로 저장

bool은 논리형(boolean type) 자료형

자료형 이름	    종류	    예시 값	        설명
int	            정수형	    1, -10, 0	    정수 저장
double	        실수형	    3.14, -2.71	    소수 포함 숫자
char	        문자형	    'a', 'Z', '0'	문자 하나 저장
string	        문자열형	"hello"	        문자 여러 개 저장
bool	        논리형	    true, false	    참 / 거짓 값을 저장







2. if(flag) 처럼 if문의 조건식에서는 bool 값이 직접 들어갈 수 있음

bool flag = true;

if (flag) {
    // flag가 true일 때 실행
}
else {
    // flag가 false일 때 실행
}


flag == true 라고 써도 되지만, flag만 써도 의미는 같음
if (flag)는 if (flag == true)와 같은 의미임



3. if 외 다른 곳에서 bool 사용 예시

반복문 제어

bool keepGoing = true;
while (keepGoing) {
    // 루프 실행 중 조건 판단
    if (어떤_조건) {
        keepGoing = false; // 반복 중단
    }
}

함수 반환값

bool isPositive(int n) {
    return n > 0;
}

삼항 연산자

int result = flag ? a + b : a - b;

조건에 따른 벡터 삽입

vector<int> vec;
bool shouldInsert = true;
if (shouldInsert) vec.push_back(10);




삼항연산자로 간결하게 쓸 수 있음

int solution(int a, int b, bool flag) {
    return flag ? a + b : a - b;
}

















