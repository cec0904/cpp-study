#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;


    if (flag) {
        return a + b;
    }
    else {
        return a - b;
    }


    return answer;
}






1. bool ����

bool = �Ҹ���(boolean)
�� ���� �� �ϳ��� ���� ���� �� ����

true(��)
false(����)

���������δ� 0(flase)�� 1(true) �� ����

���ǹ�, �ݺ���, ���� �����ڿ��� ���� ����

bool isAdult = true;
bool isEven = (n % 2 == 0); // ���ǽ� ����� bool ������ ����

bool�� ����(boolean type) �ڷ���

�ڷ��� �̸�	    ����	    ���� ��	        ����
int	            ������	    1, -10, 0	    ���� ����
double	        �Ǽ���	    3.14, -2.71	    �Ҽ� ���� ����
char	        ������	    'a', 'Z', '0'	���� �ϳ� ����
string	        ���ڿ���	"hello"	        ���� ���� �� ����
bool	        ����	    true, false	    �� / ���� ���� ����







2. if(flag) ó�� if���� ���ǽĿ����� bool ���� ���� �� �� ����

bool flag = true;

if (flag) {
    // flag�� true�� �� ����
}
else {
    // flag�� false�� �� ����
}


flag == true ��� �ᵵ ������, flag�� �ᵵ �ǹ̴� ����
if (flag)�� if (flag == true)�� ���� �ǹ���



3. if �� �ٸ� ������ bool ��� ����

�ݺ��� ����

bool keepGoing = true;
while (keepGoing) {
    // ���� ���� �� ���� �Ǵ�
    if (�_����) {
        keepGoing = false; // �ݺ� �ߴ�
    }
}

�Լ� ��ȯ��

bool isPositive(int n) {
    return n > 0;
}

���� ������

int result = flag ? a + b : a - b;

���ǿ� ���� ���� ����

vector<int> vec;
bool shouldInsert = true;
if (shouldInsert) vec.push_back(10);




���׿����ڷ� �����ϰ� �� �� ����

int solution(int a, int b, bool flag) {
    return flag ? a + b : a - b;
}

















