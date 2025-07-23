C++���� sqrt() �Լ�
������� : #include <cmath>

���� : double sqrt(double x);

�Է�: x(���, ���� ������ ����� nan)

��� : x�� ������(�Ǽ��� double)


�Է°��� 0 �̸�(����)�̸� :

����� nan(Not a Number)��. (���Ҽ� ����� �ȵ�)

���� �־ ����� �Ǽ�(double)�� ��ȯ��.



����1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 9.0;
    double result = sqrt(x);
    cout << "sqrt(9) = " << result << endl;   // 3

    cout << "sqrt(2) = " << sqrt(2) << endl;  // 1.41421...

    cout << "sqrt(0.25) = " << sqrt(0.25) << endl; // 0.5

    // ������ ������ (nan: Not a Number)
    cout << "sqrt(-4) = " << sqrt(-4) << endl; // nan (���Ұ�)
}








����2

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);

    if (a * a == n)
    {
        answer = (a + 1) * (a + 1);
    }
    else
    {
        answer = -1;
    }
    return answer;
}



for������ ���� ��

#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1; // -1�� �⺻�� ����
    for (long long i = 1; i * i <= n; i++) { // i*i�� n�� ���� ���� ������
        if (i * i == n) { // ��Ȯ�� �����̸�
            answer = (i + 1) * (i + 1);
            break; // ã������ ���̻� �� �ʿ� ����
        }
    }
    return answer;
}






for (long long i = 1; i * i <= n; i++)

1. long long i = 1;
���� i�� 1�� ����(���� ������, ���, ��Ʈ ã�� �� 1���� ������)

2. i * i <= n;
�ݺ� ����

i�� ����(i* i)�� n���� �۰ų� ���� �������� �ݺ�
(��: n = 9��� i = 3���� �� 3 * 3 = 9)

3. i++
i�� 1�� ����