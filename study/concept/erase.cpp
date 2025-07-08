erase() - 요소 삭제 함수

기본 설명
벡터에서 특정 위치 또는 범위의 요소를 삭제함.

삭제 후, 뒤 요소들이 앞으로 당겨짐.

리턴값은 삭제 후 위치의 iterator.


1. 단일 요소 삭제
예시
vector<int> v = { 1, 2, 3, 4, 5 };
v.erase(v.begin() + 2);  // 2번째 인덱스(세 번째 요소) 삭제
// 결과: {1, 2, 4, 5}


2. 범위 삭제
예시
vector<int> v = { 1, 2, 3, 4, 5 };
v.erase(v.begin() + 1, v.begin() + 4);  // 1~3번째 인덱스(2, 3, 4) 삭제
// 결과: {1, 5}

vector<int> v = { 10, 20, 30, 40, 50 };
v.erase(v.begin() + 1, v.begin() + 4);  // 20부터 40까지 삭제 (마지막 인덱스는 포함X)
// 결과: v = {10, 50}

v.erase(start, end)는[start, end) 범위를 삭제함(start 포함, end 미포함)


3. 맨 뒤 요소 삭제
예시
vector<int> v = { 1, 2, 3, 4, 5 };
v.erase(v.end() - 1);  // 맨 뒤 요소(5) 삭제
// 결과: {1, 2, 3, 4}


4. 빈 벡터에서 erase 사용
예시
vector<int> v;
v.erase(v.begin());  // 빈 벡터에서 erase 호출 → 오류 발생
// erase는 비어있는 벡터에서 호출하면 안 됨


5. erase + remove_if(조건에 따라 삭제)
STL의 remove는 실제로는 지우지 않고 뒤로 밀기만 하기 때문에, erase()와 함께 써야 함.

예시 : 짝수만 삭제
#include <algorithm> // remove_if
#include <vector>
using namespace std;

vector<int> v = { 1, 2, 3, 4, 5, 6 };
v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());
// 결과: v = {1, 3, 5}



6. 주의사항
erase는 벡터의 크기를 줄이므로, 반복자나 인덱스가 유효하지 않을 수 있음
반복자나 인덱스를 사용한 후에는 항상 유효성을 확인해야 함

erase()는 인덱스가 아니라 iterator를 인자로 받는다.
그래서 v.erase(2); 처럼 쓰면 컴파일 에러.

예시
vector<int> v = { 1, 2, 3, 4, 5 };
v.erase(v.begin() + 2);  // 3 삭제
 for (int i = 0; i < v.size(); i++) {  // 이 부분은 오류 발생 가능
     cout << v[i] << " ";  // 1 2 4 5
 }


erase 후 리턴값

auto it = v.erase(v.begin() + 2);  // it은 삭제된 다음 위치를 가리킴

it을 사용해 다음 작업을 계속할 수 있음

예시
vector<int> v = { 1, 2, 3, 4, 5 };
v.erase(v.begin() + 2);  // 3 삭제
auto it = v.erase(v.begin() + 1);  // 2 삭제 후 it은 3을 가리킴
//it을 사용해 다음 작업
cout << *it << endl;  // 출력: 4 (3이 삭제된 후, it은 4를 가리킴)

주의: erase 후에는 원래의 반복자나 인덱스는 더 이상 유효하지 않음
따라서 erase 후에는 반드시 새로 리턴된 반복자(it)를 사용해야 함





















