CHAR_BIT	Char���� ��Ʈ ��

CHAR_MAX	Char���� �ִ� ��

CHAR_MIN	Char���� �ּ� ��

SCHAR_MAX	Signed char���� �ִ� ��

SCHAR_MIN	Signed char���� �ּ� ��

UCHAR_MAX	Unsigned char���� �ִ� ��

SHRT_MAX	Short���� �ִ� ��

SHRT_MIN	Short���� �ּ� ��

USHRT_MAX	Unsigned short���� �ִ� ��

INT_MAX		Int���� �ִ� ��

INT_MIN		Int���� �ּ� ��

UINT_MAX	Unsigned int���� �ִ� ��

LONG_MAX	Long���� �ִ� ��

LONG_MIN	Long���� �ּ� ��

ULONG_MAX	Unsigned long���� �ִ� ��





3. climits ���� �� �ּ� / �ִ밪 Ǯ�̹��
* *#include <climits> * *�� �ϸ�

INT_MAX : int�� ���� �� �ִ� �ִ밪(2147483647)

INT_MIN : int�� ���� �� �ִ� �ּҰ�(-2147483648)

�뵵 : �ݺ������� �ּ� / �ִ밪�� ���� ��, �� �������� ���� ��

(1) �ּҰ� ã��

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




(2) �ִ밪 ã��

int maxVal = INT_MIN;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > maxVal)
        maxVal = arr[i];
}




(3) climits�� ���� ���� �� ���� ��ü �ڵ� ����

#include <vector>
#include <climits>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) return { -1 };

    int minVal = INT_MAX;
    int minIdx = -1;

    // �ּҰ��� �� ��ġ ã��
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }
    // �ش� ��ġ ����
    arr.erase(arr.begin() + minIdx);
    return arr;
}
arr.erase(arr.begin() + minIdx); ó�� �ε����� iterator�� ��ȯ�ؼ� ����!