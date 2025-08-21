C++ 람다 함수(Lambda Function)
1. 기본 형태
[capture](parameters) -> return_type {
    body
}


capture: 바깥 변수들을 가져오는 방법(캡처)

parameters : 함수 매개변수

->return_type : 반환형(생략 가능, 컴파일러가 추론)

{
    body
} : 실행할 코드

2. 구성 요소 상세 설명

1. Capture(캡처)

람다에서 외부 변수를 어떻게 쓸지 지정하는 부분.

[] : 아무것도 안 가져옴

[x] : 변수 x를 값(value)으로 복사해서 사용

[&x] : 변수 x를 참조(reference)로 가져옴

[=] : 현재 스코프의 모든 변수를 값으로 복사

[&] : 현재 스코프의 모든 변수를 참조로 사용

[=, &y] : 기본은 값 복사지만, y만 참조

[&, x] : 기본은 참조지만, x만 값 복사

예 :

    int a = 10, b = 20;
    auto f1 = [=]() { return a + b; };   // a,b 값 복사
    auto f2 = [&]() { return a + b; };   // a,b 참조
    auto f3 = [a, &b]() { return a + b; }; // a는 값, b는 참조

    Parameters(매개변수)

        보통 함수 매개변수처럼 작성.

        [](int x, int y) { return x + y; }

        3. Return type(반환형)

        보통 생략 가능.하지만 모호할 경우->로 지정.

        [](int x, int y) -> double { return (x + y) / 2.0; }

        4. Body(본문)

        실제 실행할 코드.

        [](int x) { return x * x; }

3. 예시


    1. 가장 단순한 람다
        auto f = []() { return 42; };
    cout << f(); // 42

    2. 매개변수 있는 람다
        auto add = [](int a, int b) { return a + b; };
    cout << add(3, 4); // 7

    3. 외부 변수 캡처
        int n = 5;
    auto mul = [n](int x) { return x * n; }; // n을 값으로 캡처
    cout << mul(10); // 50

    4. sort에서 자주 쓰이는 람다
        vector<int> v = { 5, 3, 8, 1 };

    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b; // 내림차순 정렬
        });

    4람다와 일반 함수 비교

        일반 함수 :

    bool cmp(string a, string b, int n) {
        if (a[n] == b[n]) return a < b;
        return a[n] < b[n];
    }


    람다 함수 :

    sort(strings.begin(), strings.end(), [n](string a, string b) {
        if (a[n] == b[n]) return a < b;
        return a[n] < b[n];
        });


    차이점 : sort 안에 직접 즉석에서 함수 정의 가능 → 코드 간결, 재사용할 필요 없을 때 유리.

        5장점

        코드가 간결해짐

        외부 변수를 캡처해서 활용 가능

        sort, for_each, find_if 같은 알고리즘 함수와 찰떡궁합

        정리 문장 :

    람다 함수는 작고 일회성 함수를 코드 안에서 직접 정의할 수 있는 문법.
        [] 안에서 외부 변수 캡처 방식을 지정하고, () 안에서 매개변수를 받아 {} 안에서 로직을 구현한다.
        특히 sort 같은 표준 알고리즘에서 비교 함수로 자주 사용된다.