CHAR_BIT	Char형의 비트 수

CHAR_MAX	Char형의 최대 값

CHAR_MIN	Char형의 최소 값

SCHAR_MAX	Signed char형의 최대 값

SCHAR_MIN	Signed char형의 최소 값

UCHAR_MAX	Unsigned char형의 최대 값

SHRT_MAX	Short형의 최대 값

SHRT_MIN	Short형의 최소 값

USHRT_MAX	Unsigned short형의 최대 값

INT_MAX		Int형의 최대 값

INT_MIN		Int형의 최소 값

UINT_MAX	Unsigned int형의 최대 값

LONG_MAX	Long형의 최대 값

LONG_MIN	Long형의 최소 값

ULONG_MAX	Unsigned long형의 최대 값





3. climits 썼을 때 최소 / 최대값 풀이방법
* *#include <climits> * *를 하면

INT_MAX : int로 가질 수 있는 최대값(2147483647)

INT_MIN : int로 가질 수 있는 최소값(-2147483648)

용도 : 반복문에서 최소 / 최대값을 구할 때, 비교 기준으로 많이 씀

(1) 최소값 찾기

#include <vector>
#include <climits>
using namespace std;

vector<int> arr = { 4, 3, 2, 1 };
int minVal = INT_MAX;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < minVal)
        minVal = arr[i];
}
// minVal == 1




(2) 최대값 찾기

int maxVal = INT_MIN;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > maxVal)
        maxVal = arr[i];
}




(3) climits로 제일 작은 수 제거 전체 코드 예시

#include <vector>
#include <climits>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) return { -1 };

    int minVal = INT_MAX;
    int minIdx = -1;

    // 최소값과 그 위치 찾기
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }
    // 해당 위치 삭제
    arr.erase(arr.begin() + minIdx);
    return arr;
}
arr.erase(arr.begin() + minIdx); 처럼 인덱스를 iterator로 변환해서 삭제!