#include <bits/stdc++.h>

모든 표준 라이브러리를 한 번에 다 포함하는 비공식적인 “올인원 헤더”입니다.

GCC(리눅스 / 유닉스에서 자주 사용하는 GNU 컴파일러)에서만 기본적으로 지원하는 비표준 헤더예요.

보통 알고리즘 문제 풀 때 귀찮게 하나하나 include하지 않고 :


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
...
대신


1. #include <bits/stdc++.h>
이렇게 한 줄로 해결!

장점
빠르고 편하다(코딩테스트에서 시간 절약)
웬만한 STL 전부 자동으로 포함됨

단점
이식성 떨어짐(Windows Visual Studio 같은 MSVC에서는 지원 안 됨)
필요 없는 헤더도 다 불러와서 컴파일 속도 느릴 수도 있음
(현재 이 작성하고 있는 파일도 파일소스를 열 수 없다고 나옴)

2. #include <numeric>

< numeric > 는 C++ 표준 라이브러리의 일부로, 수치 계산에 관련된 함수들(iota, accumulate 등)만 담고 있는 헤더예요.

iota를 쓰려면 반드시 <numeric>가 필요해요 :


#include <numeric>
< numeric > 는 표준 헤더라서 GCC, MSVC, Clang 등 모든 C++ 컴파일러에서 잘 작동합니다.

3. 주요 차이점 요약

항목					<bits / stdc++.h>							<numeric>
표준 여부				비표준(GCC 전용)							표준
사용 가능 컴파일러		주로 GCC(리눅스 계열)			모든 표준 C++ 컴파일러
포함 라이브러리			거의 모든 STL								numeric 관련 함수(iota, accumulate 등)
컴파일 속도				조금 느림(불필요한 헤더까지 전부 포함)		필요한 것만 포함
사용 예시				대회용, 알고리즘 문제풀이					수치계산에 국한



결론
C++ 표준 코드를 작성하려면 <numeric>
빠른 알고리즘 문제풀이 환경(GCC 한정)에서는 <bits / stdc++.h>
Visual Studio 등 Windows 환경이라면 <bits / stdc++.h> 안 됨 → <numeric>, <vector> 등을 각각 include 해야 함