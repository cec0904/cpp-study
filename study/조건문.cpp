#include <string>
#include <vector>

using namespace std;

//  "target" 모드용 함수
// 습도가 설정값보다 낮으면 3단계, 아니면 1단계 반환
int func1(int humidity, int val_set) {
    if (humidity < val_set)
        return 3;
    return 1;
}

// 정수형 두개(humidity, val_set)를 받아서 0 또는 1을 정수형으로 반환하는 함수 fuc1
// int func3(...) →** 리턴 타입이 int** 라는 뜻(정수 하나를 반환)
// humidity와 val_set → 둘 다 int 타입의 매개변수
// return 1; 또는 return 0; → 조건에 따라 정수 값을 반환
// target 모드용 함수에서 humidity 가 val_set 보다 작으면 3을 반환 그렇지 않으면 1을 반환
// else 는 생략되어 있어도 된다
// if 조건이 true 면 return 3; 에서 함수가 끝남
// return 1; 은 if 가 false 일 때만 실행
// 
//          if(humidity < val_set) {
//          return 3;  // 조건이 참일 때는 여기서 함수 종료
//          }
//          // 조건이 거짓일 때만 아래 실행됨
//          return 1;
//
//if 블록 안에 return이나 break, continue처럼
//흐름이 종료되는 명령문이 있을 경우, else를 생략해도 아무 문제가 없음
//
//오히려 코드를 더 깔끔하게 만들기도 함
//





//  "auto" 모드용 함수
// 습도 구간에 따라 0~5단계 반환
int func2(int humidity) {
    if (humidity >= 50)
        return 0;
    else if (humidity >= 40)
        return 1;
    else if (humidity >= 30)
        return 2;
    else if (humidity >= 20)
        return 3;
    else if (humidity >= 10)
        return 4;
    else
        return 5;
}

//  "minimum" 모드용 함수
// 설정값보다 낮으면 1단계, 아니면 0단계 반환
int func3(int humidity, int val_set) {
    if (humidity < val_set)
        return 1;
    return 0;
}

//  모드에 따라 해당 함수 호출 → 결과값 반환
int solution(string mode_type, int humidity, int val_set) {
    int answer = 0;

    if (mode_type == "auto") {
        answer = func2(humidity);
    }
    else if (mode_type == "target") {
        answer = func1(humidity, val_set);
    }
    else if (mode_type == "minimum") {
        answer = func3(humidity, val_set);
    }

    return answer;
}


// 내가 한거: answer = func2; -> '함수를 호출'하는 게 아니라 그냥 '함수 이름 + 숫자'로 잘못 쓰고 있음
// 이건 함수 호출이 아니라 함수 이름과 숫자가 따로 떨어져 있어서 문법 오류가 나는 상황

// 올바른 방법: answer = func2(humidity); -> 괄호로 호출 + 인자 넣기

자주 쓰는 부호 요약표

==          같다            x==10
!=          같지않다        x != 5
>           크다            x>7
<           작다            x<3
>=          크거나 같다     x>=8
<=          작거나 같다     x<=10
&&          그리고(AND)     a&&b
!           부정(NOT)       !a(a가 false면 true)


