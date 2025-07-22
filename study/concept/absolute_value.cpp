1. abs란 ?
abs(x) : x의 절댓값(absolute value, 항상 0 이상)

음수면 부호를 바꿔서 양수로, 양수나 0이면 그대로



2. 코드 예시

int a = -5;
int b = abs(a);   // 5

double c = -3.14;
double d = fabs(c); // 3.14 (실수는 fabs 사용)



3. 삼항연산자 구현

int myAbs(int x) {
return x < 0 ? -x : x;
}
조건 ? 참일 때 : 거짓일 때 형태

x < 0이면 - x, 아니면 x 리턴



4. abs 헤더 / 자료형 구분
자료형	함수	헤더
int, long	abs(x) < cstdlib >
double	fabs(x) < cmath >
C++11 이상	std::abs(x) < cstdlib > , <cmath>

실수는 fabs() 또는 std::abs() 사용(std::abs가 제일 무난)



5. abs 없이 헤더 생략해도 되나 ?
코딩테스트 환경에서는 종종 abs가 헤더 없이도 동작함(자동 포함)

하지만 정석은 #include <cstdlib> 추가



6. abs가 쓰이는 곳
두 수의 차이 거리 계산

오차, 편차, 값 비교 등

여러가지 수식에서 "부호 무시하고 크기만 필요할 때"



7. 기타 팁
C++11 이상이면 std::abs(x)가 정수 / 실수 모두 처리 가능

코딩테스트에선 std::abs() 추천



