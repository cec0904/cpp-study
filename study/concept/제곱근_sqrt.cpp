C++에서 sqrt() 함수
헤더파일 : #include <cmath>

형식 : double sqrt(double x);

입력: x(양수, 음수 넣으면 결과는 nan)

출력 : x의 제곱근(실수형 double)


입력값이 0 미만(음수)이면 :

결과는 nan(Not a Number)임. (복소수 계산은 안됨)

정수 넣어도 결과는 실수(double)로 반환됨.



예시1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 9.0;
    double result = sqrt(x);
    cout << "sqrt(9) = " << result << endl;   // 3

    cout << "sqrt(2) = " << sqrt(2) << endl;  // 1.41421...

    cout << "sqrt(0.25) = " << sqrt(0.25) << endl; // 0.5

    // 음수의 제곱근 (nan: Not a Number)
    cout << "sqrt(-4) = " << sqrt(-4) << endl; // nan (계산불가)
}








예시2

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);

    if (a * a == n)
    {
        answer = (a + 1) * (a + 1);
    }
    else
    {
        answer = -1;
    }
    return answer;
}



for문으로 했을 때

#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1; // -1로 기본값 설정
    for (long long i = 1; i * i <= n; i++) { // i*i가 n을 넘지 않을 때까지
        if (i * i == n) { // 정확히 제곱이면
            answer = (i + 1) * (i + 1);
            break; // 찾았으니 더이상 볼 필요 없음
        }
    }
    return answer;
}






for (long long i = 1; i * i <= n; i++)

1. long long i = 1;
변수 i를 1로 시작(보통 제곱근, 약수, 루트 찾을 때 1부터 시작함)

2. i * i <= n;
반복 조건

i의 제곱(i* i)이 n보다 작거나 같을 때까지만 반복
(예: n = 9라면 i = 3까지 → 3 * 3 = 9)

3. i++
i를 1씩 증가