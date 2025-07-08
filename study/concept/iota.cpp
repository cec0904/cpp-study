���α׷��ӽ� 181920




#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;

    for (int i = start_num; i <= end_num; i++)
    {
        answer.push_back(i);
    }

    return answer;
}


���� �Ϸ��� ��

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;

    int j = 0;
    j = end_num - start_num + 1;

    for (int i = start_num; i <= end_num; i++)
    {
        answer.push_back(j);
    }

    return answer;
}

�̷������� �Ϸ���

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer(end - start + 1);
    iota(answer.begin(), answer.end(), start);
    return answer;
}

iota(begin, end, start_value)�� begin���� end���� ���������� 
start_value���� 1�� �����ϴ� ���� ä����

�� start_value, start_value + 1, start_value + 2, ... �̷���.

vector<int> answer(end - start + 1)�� �̸� ����� Ȯ���صΰ� 
iota�� ���� answer ���Ϳ� start���� end���� ���� �ѹ��� ä������ �� ����

����:
int start = 3;
int end = 10;
vector<int> answer(end - start + 1);  // ũ�Ⱑ 8¥�� ����
iota(answer.begin(), answer.end(), start);
// answer: [3, 4, 5, 6, 7, 8, 9, 10]



1. iota��

iota�� C++ STL(ǥ�� ���̺귯��)�� <numeric> ����� ���ǵ� �Լ�����.

���ͳ� �迭�� ����(begin, end)�� ���������� ���� ä�� ���� �� �ְ� �����ݴϴ�.

�̸��� ��integer + total������ �Դٴ� ��⵵ �ְ�, ��incremental operation to array�� �����̶�� �ؼ��˴ϴ�.

2. ����

#include <numeric>  // iota�� ����ִ� ���
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int start = 3;
    int end = 10;
    vector<int> answer(end - start + 1);  // ũ�⸦ �̸� ����

    iota(answer.begin(), answer.end(), start);
    // answer.begin()���� answer.end()���� start���� 1�� �����ϸ� ä��

    // ��� Ȯ��
    for (int i : answer) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


��� : 3 4 5 6 7 8 9 10

3. �Ķ���� ����

iota(answer.begin(), answer.end(), start);

answer.begin() : ä��⸦ ������ ��ġ

answer.end() : ä��⸦ ���� ��ġ

start : ä��⸦ ������ ����

4. iota�� ���ο��� �ϴ� ��

for (auto it = answer.begin(); it != answer.end(); ++it) {
    *it = start++;
}

���� ���ں��� 1�� �����ϸ鼭 ����(�Ǵ� �迭)�� �� ���ҿ� ���� ����

�׷��� start���� end������ ���ӵ� ������ ä������ ��

5. for���� ��

�׸�	    for��	                                        iota
�ڵ� ����	���	                                        ª��
������	    ����(�������� ����, ������)	                    ����(�� �ٷ� ǥ��)
������	    �����ϰ� ���� ����(���� ����, ���ǹ� ����)	    �ܼ� ���Ӱ���(���� ���� �Ұ�)
����	    �� ��	                                        �ſ� ��



6. ������ ��
iota�� �׻� 1�� �����ϴ� ���ӵ� ���� ���� �� ���� (2�� �����Ϸ��� ���� for�� ��� �ؿ�!)

���� ũ�⸦ �̸� �����ص־� �� (ex: vector<int> v(n);)

���
���ӵ� ���� ä����� for�� ��� iota�� ¯!

���� ��� vector<int> answer(end - start + 1); �� ũ�⸸ �� ���صθ� :

iota(answer.begin(), answer.end(), start);

�����̸� ��




���� 1. iota�� �ܼ� ���Ӱ���(���� ���� �Ұ�)
�¾ƿ�!iota�� start���� 1�� �����ϴ� ���ӵ� ������ ä���ִ� �Լ�����.
��:


vector<int> v(5);
iota(v.begin(), v.end(), 10);  // [10, 11, 12, 13, 14]
�⺻������ 1�� ������ �˴ϴ�.

iota���� step(���а�)�� �����ϴ� �ɼ��� �����.
���� 2�� �����ϰų� 3�� �����Ϸ��� ���� for������ �����ؾ� �ؿ�.

���� ��� :


vector<int> v;
for (int i = start; i <= end; i += step) {
    v.push_back(i);
}
�Ǵ�:


generate(v.begin(), v.end(), [&start, &step]() {
    int res = start;
    start += step;
    return res;
    });
����� std::generate + ���� �������� step ������ ����������, iota ��ü�δ� �Ұ�����




���� 2. for�� auto�� �־����� �̰� ����� auto ���� �� �� �� �ִ� �͵�

for������ auto�� * *���� ��� for��(range - based for loop)** ���� Ÿ�� �߷��� ���� ���� ��

����:

vector<int> v = { 1, 2, 3, 4, 5 };

for (auto num : v) {
    cout << num << " ";
}
���⼭ auto�� num�� Ÿ���� ������ ��� Ÿ��(int)�� �ڵ� �߷�����

auto ��ſ� �� �� �ִ� �͵� :
1���� ��Ұ� int�� �� :


for (int num : v) { ... }
2���� ��Ұ� pair<string, int> ���� ��� :


vector<pair<string, int>> v = ...;
for (pair<string, int> p : v) { ... }
3const ������ ������ ���� ��� ���� :


for (const int& num : v) { ... }
��Ұ� ũ�ų� ���� ����� ū ���(��: string, pair ��)���� const ���� ����.

4������ �޾Ƽ� ���� ���� :


for (int& num : v) {
    num *= 2;  // ��� �� ���� ����
}
auto�� ����
��� Ÿ���� �� �ڵ尡 ��������
���ø� �ڵ忡�� Ÿ���� �ٲ� ������
Ư�� STL �ݺ���(iterator)�� �ٷ� �� ����

���� ��
����	                    �ǹ�
for (int num : v)	        int ����
for (int& num : v)	        int ����(���� ����)
for (const int& num : v)	int const ����(�б⸸)
for (auto num : v)	        �ڵ� �߷�(����)
for (auto& num : v)	        �ڵ� �߷�(����)
for (const auto& num : v)	�ڵ� �߷�(const ����)

���
iota�� step ���� �Ұ�(for�� or generate ���)
auto�� ��� Ÿ�� �ڵ� �߷��� ���� �����ϰ�, int, pair, const auto& �����ε� �����Ӱ� �� �� ����





// iota�� ����� ����
#include <iostream>
#include <vector>
#include <numeric>  // iota

using namespace std;

int main() {
    vector<int> v(5);              // [0, 0, 0, 0, 0]
    iota(v.begin(), v.end(), 1);   // [1, 2, 3, 4, 5]

    for (int x : v) {
        cout << x << " ";
    }
}






