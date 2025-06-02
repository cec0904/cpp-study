C++�� vector�� ǥ�� ���ø� ���̺귯��(STL) �� �ϳ���, ���� �迭(dynamic array)�� ������ �����̳��Դϴ�.vector�� ũ�⸦ �ڵ����� ������ �� �ְ�, �迭�� ������ ������� ��ҿ� ������ �� �ֱ� ������ �ſ� ���� ���˴ϴ�.

 �⺻ ����
#include <vector>
using namespace std;

vector<int> v; // ������ ���� ����


vector<T>: ���ø����� �ڷ��� T�� ���� ���� ����
���������� �迭�� ��������� ũ�Ⱑ �ڵ����� ������


 �ֿ� Ư¡

���� ũ�� ����: �ʿ� �� �ڵ����� �޸� ���Ҵ�
�������� �޸� ����: �Ϲ� �迭ó�� �ε����� ���� ����
push_back() ����: �� ���� ��� �߰�
���� ��� for�� ����: for (auto x : v) ����
���� / �̵� / ���� / ���� �� �پ��� ��� ����

 �ֿ� �Լ���
1. ���� & �ʱ�ȭ

vector<int> v1;            // �� ����
vector<int> v2(5);         // ũ�� 5, ��� 0���� �ʱ�ȭ
vector<int> v3(5, 10);     // ũ�� 5, ��� �� 10���� �ʱ�ȭ
vector<int> v4 = { 1, 2, 3 }; // ����Ʈ �ʱ�ȭ

2. ��� �߰�

v.push_back(7);  // �� �ڿ� 7 �߰�

3. ����

int x = v[2];     // �ε��� ���� (�����: ���� Ȯ�� X)
int y = v.at(2);  // �ε��� ���� (����: ���� üũ O)

4. ����

v.pop_back();     // �� �� ��� ����
v.clear();        // ��� ��� ����

5. ��Ÿ

v.size();         // ���� ��� ����
v.empty();        // ������� Ȯ�� (true/false)
v.front();        // ù ��° ���
v.back();         // ������ ���

 �ݺ��� ���

for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << ' ';
}

for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << ' ';
}
�Ǵ� �� �����ϰ� :

for (auto x : v) {
    cout << x << ' ';
}
 2���� ����(vector of vector)

vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 ���, ��� 0���� �ʱ�ȭ

 ���� ����ϴ� �Լ� ����

push_back(x): ���� ��� �߰�
pop_back(): �� ��� ����
size(): ��� ���� ��ȯ
clear(): ��ü ����
at(i): i��° ��� ����(���� üũ)
begin(), end(): �ݺ���
insert(pos, x): pos�� x ����
erase(pos): pos�� ��� ����

 ����

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    // ���: 1 2 3
}




����
#include <string>
#include <vector>

using namespace std;

// �־��� ���(route)�� ���� �̵��� ���� ��ġ�� ��ȯ�ϴ� �Լ�
// route: 'N', 'S', 'E', 'W'�� ������ ���ڿ� (��, ��, ��, �� ����)
// ��ȯ��: [���� �̵� �Ÿ�, ���� �̵� �Ÿ�]
vector<int> solution(string route) {
    int east = 0;   // ���� �̵� �Ÿ� (W �����̸� ����)
    int north = 0;  // ���� �̵� �Ÿ� (S �����̸� ����)

    vector<int> answer(2); // ����� ���� ���� [east, north]
    // "������ ���͸� ũ�� 2�� �ʱ�ȭ"�� �� �� **"���� ����" �Ǵ� "���� �ʱ�ȭ"**

    // route ���ڿ��� �� ���ڿ� ���� �ݺ�
    for (int i = 0; i < route.length(); i++) {
        switch (route[i]) {
        case 'N':  // �������� �̵�
            north++;
            break;

        case 'S':  // �������� �̵� �� ���� ���� ���� ����
            north--;
            break;

        case 'E':  // �������� �̵�
            east++;
            break;

        case 'W':  // �������� �̵� �� ���� ���� ���� ����
            east--;
            break;
        }
    }

    // ���� �̵� ��ġ�� answer ���Ϳ� ����
    answer[0] = east;   // ���� ���� ��
    answer[1] = north;  // ���� ���� ��

    return answer;
}

1. vector<int> solution(string route)
vector<int>: �� �Լ��� ��ȯ��(return) �ڷ���(������ ���� = int ���� ���� �� ��� �����̳�)

solution: �Լ� �̸�(������ ���� ������ ���� �Ǵ� ����ڰ� ����)

(string route): �Է°�(parameter �Ǵ� �Ű�����).string�� ���ڿ� Ÿ���̰� route�� ���� �̸�

��, "���ڿ� �ϳ��� �Է����� �޾Ƽ� ���� ���͸� ��ȯ�ϴ� �Լ�" ��� ��

"���ڿ� route�� �޾Ƽ� ���� ���͸� �����ϴ� �Լ� solution�� �����մϴ�"






[C++ STL:vector] ���� ����(vector sorting) - ��������, ��������, ����� ���� ����
��ó : https://kkaeruk.tistory.com/18 [������ �ڵ��ϱ�    :: ����:Ƽ���丮]


#include <string>
#include <vector>
#include <algorithm>  // sort() �Լ� ���

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a_str = "";
    string b_str = "";

    // ���͸� ������������ ����
    sort(num_list.begin(), num_list.end());

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 1) {
            a_str += to_string(num_list[i]);
        }
        else {
            b_str += to_string(num_list[i]);
        }
    }

    // ���ڿ� �� ���� ��ȯ
    int a = a_str.empty() ? 0 : stoi(a_str);
    int b = b_str.empty() ? 0 : stoi(b_str);

    answer = a + b;
    return answer;
}



sort()�� greater<int>()�� �־��ָ� ������������ ���ĵ�

sort(num_list.begin(), num_list.end(), greater<int>());

sort()�� ���͸� ���ϴ� ������ ����

�������� : sort(num_list.begin(), num_list.end());

��������: sort(num_list.begin(), num_list.end(), greater<int>());

���Ŀ� += �� �̾���̱�




