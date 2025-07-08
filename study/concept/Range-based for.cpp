1. Range - based for문이란 ?

for (auto 변수 : 컨테이너) {
    // 반복 내용
}

C++11부터 도입된 문법으로,
벡터, 배열, 문자열 등 "범위를 가진 자료형"에 대해
한 요소씩 쉽게 꺼내 쓸 수 있게 해주는 반복문


2. 기본 사용 예시

vector<int> v = { 10, 20, 30 };

for (int x : v) {
    cout << x << " ";  // 10 20 30
}


3. 값 수정하고 싶을 땐 ?

기본은 복사본이라 x를 수정해도 v엔 반영 안 됨.
참조형으로 써야 직접 수정 가능

for (int& x : v) {
    x *= 2;  // 벡터 값들을 2배로 만듦
}

const auto& x라고 쓰면 :
복사는 피하면서, 값은 못 바꾸게 안전하게 만들 수 있음


range - based for vs 일반 for 차이
1. 일반 for문

for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
}
i를 통해 인덱스 접근

값 뿐 아니라 몇 번째인지도 알고 싶을 때 유리

수정도 가능 : v[i] = ...

2. Range - based for문

for (int x : v) {
    cout << x << endl;
}
벡터의 요소 값만 반복할 때 간단하고 깔끔

인덱스 필요 없을 때 추천

const auto& x로 하면 복사 없이 더 효율적

정리표
구분	                일반 for	                            Range - based for

문법	                for (int i = 0; ...)	                for (auto x : v)
인덱스 사용 가능	    가능	                                불가능
값만 쓰기	            가능	                                가장 적합
값 수정	                가능(v[i] = ...)	                    불가능, 기본적으로 복사됨(참조 사용해야 가능)
가독성	                길다	                                짧고 직관적



항목	            Range - based for	                    iota

역할	            컨테이너의 값을 하나씩 꺼내서 반복	    컨테이너에 값을 자동으로 채움
동작	            반복	                                초기화
예제	            for (int x : v)	                        iota(v.begin(), v.end(), 0)
헤더 필요	        없음	                                <numeric> 필요


iota는[시작값부터 1씩 증가하는 값으로 자동 채움]