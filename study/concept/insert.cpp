push_back()

벡터의 맨 뒤에 값을 추가하는 함수.
가장 단순하고 빠른 방식.
vector<int> v; 일 때 v.push_back(10); → v = { 10 }

//예시

// vector<int> v;
// v.push_back(1);  // v = { 1 }
// v.push_back(2);  // v = { 1, 2 }
// v.push_back(3);  // v = { 1, 2, 3 }
//
// 벡터의 크기가 자동으로 늘어나면서 값이 추가됨


insert() insert(pos, value)
// 벡터의 특정 위치에 값을 삽입하는 함수.
// 원하는 인덱스에 값을 넣을 수 있어 유용.
// 예시
// vector<int> v = { 1, 2, 3 };
// v.insert(v.begin() + 1, 10);  // v = { 1, 10, 2, 3 }
// v.insert(v.end(), 20);  // v = { 1, 10, 2, 3, 20 }
//
// 벡터의 크기가 자동으로 늘어나면서 값이 삽입됨
//
// 벡터의 맨 뒤에 값을 추가하는 push_back()과는 다르게,
// insert()는 벡터의 중간이나 맨 앞에 값을 넣을 수 있어요.
// 예를 들어, 벡터의 두 번째 위치에 값을 넣고 싶다면 :
// v.insert(v.begin() + 1, 10);  // 벡터의 두 번째 위치에 10 삽입
// insert()는 벡터의 크기를 늘리는 연산이므로, 기존 요소들을 뒤로 밀어내고 새로운 값을 삽입합니다.
// 따라서 insert()를 사용할 때는 벡터의 크기가 늘어나는 점을 고려해야 합니다.
// 
// 
// 
// 주의사항
// insert()는 벡터의 크기를 늘리기 때문에, 빈 벡터에 insert()를 사용하면
// 벡터의 크기가 1로 늘어나고, 해당 위치에 값이 삽입됩니다.
// 예시
// vector<int> v;
// v.insert(v.begin(), 10);  // v = { 10 }
//
// 벡터가 비어있을 때도 insert()를 사용하면 크기가 1로 늘어나고 값이 삽입됨
//
// 벡터의 크기를 늘리는 연산이므로, 빈 벡터에 insert()를 사용하면



pos 위치에 val을 삽입하고, 그 뒤의 요소들은 하나씩 뒤로 밀림.

** pos는 반복자(iterator)** 를 사용함 : 예를 들면 v.begin(), v.end(), v.begin() + n 등.

예시 1 : 기본형
vector<int> v = { 1, 2, 3 };
v.insert(v.begin() + 2, 99);  // 2번째 인덱스(세 번째 자리)에 99 삽입
// 결과: {1, 2, 99, 3}


예시 2 : 반복자 사용
vector<int> v = { 1, 2, 3 };
v.insert(v.begin(), 0);  // 맨 앞에 0 삽입
// 결과: {0, 1, 2, 3}


예시 3 : 맨 뒤에 삽입
v.insert(v.end(), 4);  // 맨 뒤에 4 삽입
// 결과: {0, 1, 2, 3, 4}


예시 4 : 여러 개의 값 삽입
vector<int> v = { 1, 2, 3 };
vector<int> to_insert = { 4, 5, 6 };
v.insert(v.end(), to_insert.begin(), to_insert.end());  // 맨 뒤에 4, 5, 6 삽입
// 결과: {1, 2, 3, 4, 5, 6}


예시 4-1: 여러 개 삽입
vector<int> v = { 1, 2, 3 };
v.insert(v.begin() + 1, 3, 5);  // 1번째 인덱스 자리에 5를 3번 삽입
// 결과: {1, 5, 5, 5, 2, 3}


예시 5 : 빈 벡터에 삽입
vector<int> v;
v.insert(v.begin(), 10);  // 빈 벡터에 10 삽입
// 결과: {10}


예시 6: 다른 벡터 범위 삽입
vector<int> v = { 1, 2, 3 };
vector<int> to_add = { 10, 20 };
v.insert(v.begin() + 1, to_add.begin(), to_add.end());
// 결과: {1, 10, 20, 2, 3}


pos에 올 수 있는 것들
1. 반복자(iterator)
v.begin() → 맨 앞
v.end() → 맨 끝 다음 위치(실질적으로 맨 뒤에 추가)
v.begin() + n → n번째 인덱스 위치

2. 인덱스
v[0], v[1], ... 등

3. 다른 벡터의 반복자
to_insert.begin(), to_insert.end() 등

4. 다른 컨테이너의 반복자
list.begin(), set.begin() 등

5. 직접 계산한 위치
v.begin() + n, v.end() - 1 등

6. 빈 벡터에 삽입할 때는 v.begin() 사용
7. 반복자 범위



























