1. std::find(�˰��� �Լ�)

1 - 1. ����

<algorithm> ����� ����.

�����̳�(vector, list, array, string ��)���� ���� ���� Ž��.

ó�� ã�� ������ iterator�� ��ȯ.

1 - 2. ���� ���

���� Ž��(O(n))

ã���� �ش� ��ġ ��ȯ, �� ã����.end() ��ȯ.

2. �Լ� ����
template<class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T & value);


2 - 1. �Ű�����

first, last : Ž�� ����[first, last)

value : ã�� ��

2 - 2. ��ȯ��

ã�� �� �ش� iterator

�� ã�� �� last

3. �⺻ ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = { 10, 20, 30, 40, 50 };

    auto it = find(v.begin(), v.end(), 30);

    if (it != v.end())
        cout << "ã�Ҵ�! �ε���: " << (it - v.begin()) << endl;
    else
        cout << "����" << endl;
}

4. Ȱ��

4 - 1. �ε��� ���ϱ�(vector ���� ���� ���� ������ �����̳ʿ���)

int idx = it - v.begin();


4 - 2. ���� Ž�� �� std::find_if

auto it = find_if(v.begin(), v.end(), [](int x) { return x > 25; });

5. ���ǻ���

5 - 1. �ð� ���⵵ : O(n)
5 - 2. ���� ���� ����.end() ��ȯ�ϹǷ� �ݵ�� üũ �ʿ�

6. std::string::find ���� ����

6 - 1. std::find(�˰���)

�����̳� �������� ���� �ϳ��� ã�� �Լ�.

��ȯ���� iterator.

6 - 2. string.find(��� �Լ�)

���ڿ����� �κ� ���ڿ� �Ǵ� ���ڸ� ã�� �Լ�.

��ȯ���� �ε���(size_t), �����ϸ� string::npos.

����:

string s = "hello world";
size_t pos = s.find("world"); // 6
if (pos != string::npos) cout << "ã��";

���

std::find = ��� �����̳ʿ��� �� Ž��(��ȯ: iterator)

string.find = ���ڿ� ���� �κ� ���ڿ� Ž��(��ȯ: �ε���)

















1. �⺻ std::find

���� : ���� ���� ���Ҹ� ã��

��ȯ : iterator(�� ã����.end())

����

auto it = find(v.begin(), v.end(), 30);

2. std::find_if

2 - 1. Ư¡

����(����, �Լ� ��)�� �´� ù ��° ���Ҹ� ã��

2 - 2. ����

auto it = find_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });


�� ù ��° ¦�� ã��

3. std::find_if_not

3 - 1. Ư¡

������ �������� �ʴ� ù ��° ���� ã��

3 - 2. ����

auto it = find_if_not(v.begin(), v.end(), [](int x) { return x < 10; });


�� 10 �̻��� ù ��° ���� ã��

4. std::find_end

4 - 1. Ư¡

� �κ� ������(subsequence) �� ��ü ���� �ȿ��� ���������� �����ϴ� ��ġ ã��

4 - 2. ����

vector<int> v = { 1,2,3,4,2,3,4,5 };
vector<int> sub = { 2,3,4 };

auto it = find_end(v.begin(), v.end(), sub.begin(), sub.end());
// it�� �� ��° {2,3,4} ���� ��ġ�� ����Ŵ

5. std::find_first_of

5 - 1. Ư¡

���� �ĺ� �� ù ��°�� �����ϴ� ���� ã��

5 - 2. ����

vector<int> v = { 1,2,3,4,5 };
vector<int> target = { 7,3,8 };

auto it = find_first_of(v.begin(), v.end(), target.begin(), target.end());
// it�� 3�� ����Ŵ

6. ���ڿ� ���� string.find

6 - 1. Ư¡

���ڿ� ���ο��� ���� or �κ� ���ڿ� �˻�

��ȯ���� size_t(�ε���), ���� �� string::npos

6 - 2. ����

string s = "hello world";
size_t pos = s.find("world"); // 6

7. ����

std::find : ������ ã��

std::find_if : ���� �´� �� ã��

std::find_if_not : ���ǿ� ���� �ʴ� �� ã��

std::find_end : �κ� �������� ������ ���� ��ġ ã��

std::find_first_of : ���� �ĺ� �� ù ���� ���� ã��

string.find : ���ڿ� ����, �ε��� ��ȯ