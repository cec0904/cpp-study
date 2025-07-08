emplace_back()

push_back과 비슷하게 맨 뒤에 추가하지만, 차이점은 객체를 직접 생성하면서 추가.

객체를 복사하지 않고 바로 생성해서 성능상 유리함(특히 클래스 / 구조체의 경우).

예시

vector<pair<int, int>> vp;
vp.emplace_back(1, 2);  // pair<int,int>(1,2)를 직접 생성하여 추가
// 결과: vp = {{1,2}}

비교

vp.push_back(make_pair(3, 4));   // make_pair 필요
vp.emplace_back(3, 4);           // 더 간단하고 빠름