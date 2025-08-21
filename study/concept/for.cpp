1. 기본 인덱스 for문

vector<int> arr = { 10, 20, 30, 40 };
for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
}
인덱스가 필요할 때 사용

arr[i]로 원소에 접근

2. 범위 기반 for문(복사)

for (int x : arr) {
    cout << x << endl;
}
arr의 값을 하나씩 x에 복사해서 반복

x를 바꿔도 arr 원본엔 영향 없음

3. 범위 기반 for문(참조)

for (int& x : arr) {
    x += 100;
}
&x: x가 arr 원소 자체를 참조

x를 바꾸면 arr 값도 바뀜

4. 범위 기반 for문(상수 참조)

for (const int& x : arr) {
    cout << x << endl;
}
x를 절대 수정 못함

복사 비용 없이 읽기만 할 때 사용(성능↑)

5. 역순 반복

for (int i = arr.size() - 1; i >= 0; i--) {
    cout << arr[i] << endl;
}
뒤에서 앞으로 접근

6. 반복자(iterator) 사용

for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
    cout << *it << endl;
}
*it: 현재 원소 값

삭제 / 삽입 작업 등에서 자주 사용

7. const_iterator(읽기 전용 반복자)

for (vector<int>::const_iterator it = arr.cbegin(); it != arr.cend(); ++it) {
    cout << *it << endl;
}
값을 바꿀 수 없음

읽기 전용 반복

8. C++17 structured binding(짝수, 홀수 따로)

vector<pair<int, int>> vp = { {1, 2}, {3, 4} };
for (auto& [a, b] : vp) {
    cout << a << ", " << b << endl;
}
pair, tuple 등에서 여러 값을 한 번에 꺼내 쓸 때














1. 기본 for문

가장 전통적인 방식입니다.

for (int i = 0; i < n; i++) {
    cout << i << " ";
}


i를 0부터 n - 1까지 증가시키면서 실행합니다.

인덱스를 직접 다루기 때문에 배열, 벡터에 인덱스로 접근할 때 적합합니다.

2. 범위 기반 for문(range - based for)

C++11부터 추가된 문법으로, 컨테이너나 배열의 원소를 하나씩 순회할 때 사용합니다.

vector<int> v = { 1, 2, 3, 4 };

// 값 복사
for (int x : v) {
    cout << x << " ";
}

// 참조 사용 (원본 수정 가능)
for (int& x : v) {
    x *= 2;
}

// const 참조 (읽기 전용)
for (const int& x : v) {
    cout << x << " ";
}

특징

for (타입 변수명 : 컨테이너) 형태

인덱스가 필요 없는 경우 훨씬 깔끔함

& 를 쓰면 원본 수정 가능, 안 쓰면 복사본

const& 쓰면 읽기 전용으로 안전하게 접근

3. for문 숏컷(단축 문법)

전통적인 for를 간결하게 쓰는 방식입니다.

예를 들어 카운트 증가 :

for (int i = 0; i < 10; i++) cout << i << " ";


또는 역순 :

for (int i = 10; i-- > 0; ) cout << i << " ";


또는 초기화 안 하고 재활용 :

int i = 0;
for (; i < 10; i++) cout << i << " ";


또는 증감식 건너뛰고 while처럼 :

for (int i = 0; i < 10; ) {
    cout << i << " ";
    i += 2;
}