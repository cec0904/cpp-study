C++의 vector는 표준 템플릿 라이브러리(STL) 중 하나로, 동적 배열(dynamic array)을 구현한 컨테이너입니다.vector는 크기를 자동으로 조절할 수 있고, 배열과 유사한 방식으로 요소에 접근할 수 있기 때문에 매우 자주 사용됩니다.

 기본 개념
#include <vector>
using namespace std;

vector<int> v; // 정수형 벡터 선언


vector<T>: 템플릿으로 자료형 T를 가진 벡터 생성
내부적으로 배열을 사용하지만 크기가 자동으로 조절됨


 주요 특징

동적 크기 조절: 필요 시 자동으로 메모리 재할당
연속적인 메모리 구조: 일반 배열처럼 인덱스로 접근 가능
push_back() 지원: 맨 끝에 요소 추가
범위 기반 for문 지원: for (auto x : v) 가능
복사 / 이동 / 삽입 / 삭제 등 다양한 기능 지원

 주요 함수들
1. 삽입 & 초기화

vector<int> v1;            // 빈 벡터
vector<int> v2(5);         // 크기 5, 모두 0으로 초기화
vector<int> v3(5, 10);     // 크기 5, 모든 값 10으로 초기화
vector<int> v4 = { 1, 2, 3 }; // 리스트 초기화

2. 요소 추가

v.push_back(7);  // 맨 뒤에 7 추가

3. 접근

int x = v[2];     // 인덱스 접근 (비권장: 범위 확인 X)
int y = v.at(2);  // 인덱스 접근 (권장: 범위 체크 O)

4. 삭제

v.pop_back();     // 맨 끝 요소 제거
v.clear();        // 모든 요소 삭제

5. 기타

v.size();         // 현재 요소 개수
v.empty();        // 비었는지 확인 (true/false)
v.front();        // 첫 번째 요소
v.back();         // 마지막 요소

 반복자 사용

for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << ' ';
}

for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << ' ';
}
또는 더 간단하게 :

for (auto x : v) {
    cout << x << ' ';
}
 2차원 벡터(vector of vector)

vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 행렬, 모두 0으로 초기화

 자주 사용하는 함수 정리

push_back(x): 끝에 요소 추가
pop_back(): 끝 요소 삭제
size(): 요소 개수 반환
clear(): 전체 삭제
at(i): i번째 요소 접근(범위 체크)
begin(), end(): 반복자
insert(pos, x): pos에 x 삽입
erase(pos): pos의 요소 삭제

 예제

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    // 출력: 1 2 3
}




예시
#include <string>
#include <vector>

using namespace std;

// 주어진 경로(route)를 따라 이동한 최종 위치를 반환하는 함수
// route: 'N', 'S', 'E', 'W'로 구성된 문자열 (북, 남, 동, 서 방향)
// 반환값: [동쪽 이동 거리, 북쪽 이동 거리]
vector<int> solution(string route) {
    int east = 0;   // 동쪽 이동 거리 (W 방향이면 음수)
    int north = 0;  // 북쪽 이동 거리 (S 방향이면 음수)

    vector<int> answer(2); // 결과를 담을 벡터 [east, north]
    // "정수형 벡터를 크기 2로 초기화"한 것 → **"벡터 생성" 또는 "벡터 초기화"**

    // route 문자열의 각 문자에 대해 반복
    for (int i = 0; i < route.length(); i++) {
        switch (route[i]) {
        case 'N':  // 북쪽으로 이동
            north++;
            break;

        case 'S':  // 남쪽으로 이동 → 북쪽 방향 음수 증가
            north--;
            break;

        case 'E':  // 동쪽으로 이동
            east++;
            break;

        case 'W':  // 서쪽으로 이동 → 동쪽 방향 음수 증가
            east--;
            break;
        }
    }

    // 최종 이동 위치를 answer 벡터에 저장
    answer[0] = east;   // 동쪽 방향 값
    answer[1] = north;  // 북쪽 방향 값

    return answer;
}

1. vector<int> solution(string route)
vector<int>: 이 함수가 반환할(return) 자료형(정수형 벡터 = int 값을 여러 개 담는 컨테이너)

solution: 함수 이름(문제에 따라 정해져 있음 또는 사용자가 정함)

(string route): 입력값(parameter 또는 매개변수).string은 문자열 타입이고 route는 변수 이름

즉, "문자열 하나를 입력으로 받아서 정수 벡터를 반환하는 함수" 라는 뜻

"문자열 route를 받아서 정수 벡터를 리턴하는 함수 solution을 정의합니다"






[C++ STL:vector] 벡터 정렬(vector sorting) - 오름차순, 내림차순, 사용자 지정 정렬
출처 : https://kkaeruk.tistory.com/18 [깨륵의 코딩일기    :: 깨코:티스토리]


#include <string>
#include <vector>
#include <algorithm>  // sort() 함수 사용

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a_str = "";
    string b_str = "";

    // 벡터를 오름차순으로 정렬
    sort(num_list.begin(), num_list.end());

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 1) {
            a_str += to_string(num_list[i]);
        }
        else {
            b_str += to_string(num_list[i]);
        }
    }

    // 문자열 → 정수 변환
    int a = a_str.empty() ? 0 : stoi(a_str);
    int b = b_str.empty() ? 0 : stoi(b_str);

    answer = a + b;
    return answer;
}



sort()에 greater<int>()를 넣어주면 내림차순으로 정렬됨

sort(num_list.begin(), num_list.end(), greater<int>());

sort()로 벡터를 원하는 순서로 정렬

오름차순 : sort(num_list.begin(), num_list.end());

내림차순: sort(num_list.begin(), num_list.end(), greater<int>());

이후에 += 로 이어붙이기




