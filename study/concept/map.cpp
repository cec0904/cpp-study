1. map 개요

1 - 1. 정의

<map> 헤더에 포함된 컨테이너

key?value(키?값) 쌍을 저장

key는 중복 불가, 자동으로 정렬됨

내부적으로 이진 탐색 트리(Red - Black Tree) 기반

1 - 2. 특징

key는 항상 정렬 상태 유지(< 연산자 기준)

    탐색, 삽입, 삭제 → O(log n)

    2. 선언 방법
#include <map>
    map<string, int> m;   // key = string, value = int
map<int, string> m2;  // key = int, value = string

3. 원소 삽입

3 - 1. insert 사용

m.insert({ "apple", 3 });
m.insert(make_pair("banana", 5));


3 - 2. 대괄호 사용

m["cherry"] = 7;

4. 원소 접근

4 - 1. 대괄호 방식

cout << m["apple"];   // 3


만약 key가 없으면 자동으로 생성되고 value는 기본값(0, 빈 문자열 등)으로 초기화됨

4 - 2. at() 사용

cout << m.at("banana");   // 5


key가 없으면 예외(out_of_range) 발생

5. 탐색

5 - 1. find()

auto it = m.find("apple");
if (it != m.end())
cout << "찾음: " << it->first << " " << it->second;


찾으면 iterator 반환, 없으면.end() 반환

5 - 2. count()

if (m.count("banana") > 0) cout << "존재함";


key 존재 여부 확인(중복 불가 map에서는 0 또는 1)

6. 순회

6 - 1. 범위 기반 for

for (auto& p : m)
cout << p.first << " " << p.second << endl;


6 - 2. iterator 사용

for (auto it = m.begin(); it != m.end(); it++)
cout << it->first << " " << it->second << endl;

7. 삭제
m.erase("apple");        // key로 삭제
m.erase(m.begin());      // iterator로 삭제
m.clear();               // 전체 삭제

8. 주요 특징 정리

자동 정렬(기본 오름차순)

key 중복 불가(중복 허용은 multimap)

key / value 타입 자유롭게 지정 가능

시간 복잡도 : 삽입, 탐색, 삭제 모두 O(log n)