1. map ����

1 - 1. ����

<map> ����� ���Ե� �����̳�

key?value(Ű?��) ���� ����

key�� �ߺ� �Ұ�, �ڵ����� ���ĵ�

���������� ���� Ž�� Ʈ��(Red - Black Tree) ���

1 - 2. Ư¡

key�� �׻� ���� ���� ����(< ������ ����)

    Ž��, ����, ���� �� O(log n)

    2. ���� ���
#include <map>
    map<string, int> m;   // key = string, value = int
map<int, string> m2;  // key = int, value = string

3. ���� ����

3 - 1. insert ���

m.insert({ "apple", 3 });
m.insert(make_pair("banana", 5));


3 - 2. ���ȣ ���

m["cherry"] = 7;

4. ���� ����

4 - 1. ���ȣ ���

cout << m["apple"];   // 3


���� key�� ������ �ڵ����� �����ǰ� value�� �⺻��(0, �� ���ڿ� ��)���� �ʱ�ȭ��

4 - 2. at() ���

cout << m.at("banana");   // 5


key�� ������ ����(out_of_range) �߻�

5. Ž��

5 - 1. find()

auto it = m.find("apple");
if (it != m.end())
cout << "ã��: " << it->first << " " << it->second;


ã���� iterator ��ȯ, ������.end() ��ȯ

5 - 2. count()

if (m.count("banana") > 0) cout << "������";


key ���� ���� Ȯ��(�ߺ� �Ұ� map������ 0 �Ǵ� 1)

6. ��ȸ

6 - 1. ���� ��� for

for (auto& p : m)
cout << p.first << " " << p.second << endl;


6 - 2. iterator ���

for (auto it = m.begin(); it != m.end(); it++)
cout << it->first << " " << it->second << endl;

7. ����
m.erase("apple");        // key�� ����
m.erase(m.begin());      // iterator�� ����
m.clear();               // ��ü ����

8. �ֿ� Ư¡ ����

�ڵ� ����(�⺻ ��������)

key �ߺ� �Ұ�(�ߺ� ����� multimap)

key / value Ÿ�� �����Ӱ� ���� ����

�ð� ���⵵ : ����, Ž��, ���� ��� O(log n)