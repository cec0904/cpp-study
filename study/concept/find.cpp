1. std::find(알고리즘 함수)

1 - 1. 정의

<algorithm> 헤더에 있음.

컨테이너(vector, list, array, string 등)에서 값을 순차 탐색.

처음 찾은 원소의 iterator를 반환.

1 - 2. 동작 방식

선형 탐색(O(n))

찾으면 해당 위치 반환, 못 찾으면.end() 반환.

2. 함수 원형
template<class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T & value);


2 - 1. 매개변수

first, last : 탐색 구간[first, last)

value : 찾을 값

2 - 2. 반환값

찾음 → 해당 iterator

못 찾음 → last

3. 기본 예시
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = { 10, 20, 30, 40, 50 };

    auto it = find(v.begin(), v.end(), 30);

    if (it != v.end())
        cout << "찾았다! 인덱스: " << (it - v.begin()) << endl;
    else
        cout << "없음" << endl;
}

4. 활용

4 - 1. 인덱스 구하기(vector 같이 랜덤 접근 가능한 컨테이너에서)

int idx = it - v.begin();


4 - 2. 조건 탐색 → std::find_if

auto it = find_if(v.begin(), v.end(), [](int x) { return x > 25; });

5. 주의사항

5 - 1. 시간 복잡도 : O(n)
5 - 2. 값이 없을 때는.end() 반환하므로 반드시 체크 필요

6. std::string::find 와의 차이

6 - 1. std::find(알고리즘)

컨테이너 범위에서 원소 하나를 찾는 함수.

반환값은 iterator.

6 - 2. string.find(멤버 함수)

문자열에서 부분 문자열 또는 문자를 찾는 함수.

반환값은 인덱스(size_t), 실패하면 string::npos.

예시:

string s = "hello world";
size_t pos = s.find("world"); // 6
if (pos != string::npos) cout << "찾음";

요약

std::find = 모든 컨테이너에서 값 탐색(반환: iterator)

string.find = 문자열 전용 부분 문자열 탐색(반환: 인덱스)

















1. 기본 std::find

정의 : 값이 같은 원소를 찾음

반환 : iterator(못 찾으면.end())

예시

auto it = find(v.begin(), v.end(), 30);

2. std::find_if

2 - 1. 특징

조건(람다, 함수 등)에 맞는 첫 번째 원소를 찾음

2 - 2. 예시

auto it = find_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });


→ 첫 번째 짝수 찾기

3. std::find_if_not

3 - 1. 특징

조건을 만족하지 않는 첫 번째 원소 찾음

3 - 2. 예시

auto it = find_if_not(v.begin(), v.end(), [](int x) { return x < 10; });


→ 10 이상인 첫 번째 원소 찾기

4. std::find_end

4 - 1. 특징

어떤 부분 시퀀스(subsequence) 가 전체 범위 안에서 마지막으로 등장하는 위치 찾기

4 - 2. 예시

vector<int> v = { 1,2,3,4,2,3,4,5 };
vector<int> sub = { 2,3,4 };

auto it = find_end(v.begin(), v.end(), sub.begin(), sub.end());
// it은 두 번째 {2,3,4} 시작 위치를 가리킴

5. std::find_first_of

5 - 1. 특징

여러 후보 중 첫 번째로 등장하는 원소 찾기

5 - 2. 예시

vector<int> v = { 1,2,3,4,5 };
vector<int> target = { 7,3,8 };

auto it = find_first_of(v.begin(), v.end(), target.begin(), target.end());
// it은 3을 가리킴

6. 문자열 전용 string.find

6 - 1. 특징

문자열 내부에서 문자 or 부분 문자열 검색

반환값은 size_t(인덱스), 실패 시 string::npos

6 - 2. 예시

string s = "hello world";
size_t pos = s.find("world"); // 6

7. 정리

std::find : 값으로 찾기

std::find_if : 조건 맞는 값 찾기

std::find_if_not : 조건에 맞지 않는 값 찾기

std::find_end : 부분 시퀀스의 마지막 등장 위치 찾기

std::find_first_of : 여러 후보 중 첫 등장 원소 찾기

string.find : 문자열 전용, 인덱스 반환