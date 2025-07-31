1. 최대 / 최소값 찾기

(1) STL 사용법 : min_element, max_element
min_element

역할 : 컨테이너(배열, vector, string 등)에서 가장 작은 원소의 iterator를 반환

문법 :

auto it = min_element(시작, 끝);
int 최소값 = *it;


예시:
vector<int> arr = { 4, 3, 2, 1 };
auto it = min_element(arr.begin(), arr.end());
int minVal = *it; // 1
max_element


역할 : 컨테이너에서 가장 큰 원소의 iterator를 반환


문법 :
auto it = max_element(시작, 끝);
int 최대값 = *it;
iterator는 뭐냐 ?

컨테이너 안에서 "위치"를 가리키는 포인터 비슷한 개념

실제 값은 * it처럼 사용해서 꺼냄




(2) 직접 반복문으로 찾기

예시(최소값) :

int minVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < minVal)
        minVal = arr[i];
}



예시(최대값) :

int maxVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > maxVal)
        maxVal = arr[i];
}