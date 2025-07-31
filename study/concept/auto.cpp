2. auto it = find(arr.begin(), arr.end(), minVal);


의미 : 변수의 타입을 자동 추론해주는 기능(C++11부터 지원)

STL 사용시 타입이 너무 길어질 때 자동으로 타입을 맞춰줌

예시 :
auto x = 5;      // int
auto y = 3.14;   // double
auto s = "abc";  // const char*




find()와 auto

find(arr.begin(), arr.end(), 값)는 iterator(반복자)를 반환

반복자의 타입은
vector<int>::iterator(int vector일 때)
진짜로 쓰면 vector<int>::iterator it = ...처럼 됨

auto it = ...라고 하면 타입을 컴파일러가 알아서 추론해줌 → 코드 짧아지고, STL에 더 편리하게 쓸 수 있음



예시:

vector<int> arr = { 4, 3, 2, 1 };
int minVal = 1;
auto it = find(arr.begin(), arr.end(), minVal); // it는 arr에서 1을 가리키는 iterator
if (it != arr.end()) arr.erase(it);
