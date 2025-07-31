1. ���ǿ� ����
* *substr * *�� C++�� std::string Ŭ������ ���Ե� ��� �Լ�.

���: ���ڿ����� �Ϻ� ����(�κ� ���ڿ�, substring)�� �߶� ���ο� ���ڿ� ��ü�� ��ȯ�Ѵ�.

���� ���ڿ����� ��ȭ ����(���ı���).
* �ַ� ���ڿ��� Ư�� �κ��� �����ϰų�, �����̽�(slicing)�� �� ���ȴ�.

2. �⺻ ����

string substr(size_t pos = 0, size_t len = npos) const;
pos: ���� �ε���(0���� ����, �⺻�� 0)

len : ������ ����(�⺻�� npos = ������)

���ϰ� : ���Ӱ� ������ �κ� ���ڿ�(string ��ü)

����

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcdef";
    cout << s.substr(2, 3) << endl;  // "cde"
    cout << s.substr(0, 2) << endl;  // "ab"
    cout << s.substr(3) << endl;     // "def" (������)
    cout << s.substr(0, 100) << endl;// "abcdef" (���� �Ѿ�� ���� X)
}



3. ���� ���� �� Ư¡
���ο� string ��ü�� ��ȯ��(������ �״��).

pos�� ���ڿ� ���̺��� ũ�� out_of_range ���� �߻�(����, ��Ÿ�� ����).

len�� ���� ���ڿ����� Ŀ�� �ڵ����� ������ ��ȯ.

len�� 0���� �ϸ� ""(�� ���ڿ�) ��ȯ.

���� ��Ȳ
pos > s.size() : ����(std::out_of_range) �߻� �� ���α׷� ���� ����!


string s = "abc";
s.substr(10); // ���� �߻�
len�� ������ : ���� �ʰ��ص� ���� �� ��.




4. �پ��� Ȱ��� / ����
1) �տ��� ���� �κи� ����

string s = "2025-07-31";
string year = s.substr(0, 4); // "2025"
2) �ڿ��� ���� �κ� ����

string s = "12345678";
string last4 = s.substr(s.size() - 4, 4); // "5678"
3) �߰����� ����

string s = "abcdef";
string mid = s.substr(2, 2); // "cd"
4) split�� ����ϰ� ���
���ڿ����� �����ڸ� ã�Ƽ� �κ� ����


string email = "abcd@naver.com";
size_t at = email.find('@');
string id = email.substr(0, at);     // "abcd"
string domain = email.substr(at + 1);  // "naver.com"




5. ������ ���� ���� ����
1) ����ŷ

string phone = "01012345678";
string masked = string(phone.size() - 4, '*') + phone.substr(phone.size() - 4);
// "*******5678"
2) ���ڿ� �� ������

string s = "abcdef";
int mid = s.size() / 2;
string left = s.substr(0, mid);
string right = s.substr(mid);
// left: "abc", right: "def"
3) Ȯ���� �и�

string filename = "report.pdf";
size_t dot = filename.rfind('.');
string ext = (dot != string::npos) ? filename.substr(dot + 1) : "";
// ext: "pdf"




6. ����: substr + find / erase / replace
find : Ư�� ���� / ���� ã��, substr�� �߶󳻱�.

erase : substr�� �����ؼ� �ʿ��� �κи� �����.

replace : substr�� �յ� / �߰��� �����ؼ� ���� �� ���ο� ���ڿ� �����.




7. ������ ��
index�� �׻� 0����(Python�̶� ���).

pos�� �Ѿ�� ������ ��Ÿ�� ���� �� �׻� ���� üũ����.

string::npos : unsigned long long�� �ִ밪(�Ϲ������� - 1�� ���õ�).

string�� empty("")�� �� substr(0, 0)�� ""��ȯ(���� �ȳ�).

8. STL ���� substr ����
vector<string>���� �κ� ���ڿ� ����

sort, set, map�� key�� �κ� ���ڿ� ���

for������ substr�� �����̵� ������ ����

9. ���� �������� ���� Ȱ��Ǵ� ����
�ֹι�ȣ ���ڸ� / ���ڸ� �и�

��¥, �ð� �Ľ�

���ڿ� ����ŷ, �������� ��ȣ

split ����(�����ڷ� �и� �� find, substr ����)

�����̵� ������ ����(���ڿ��� ��� �κ� ���ڿ� ����)

10. substr�� ����� �Լ�
std::string_view�� substr(C++17~)

Python�� �����̽�(s[2:5] �� C++���� s.substr(2, 3))

C�� strncpy�� ����� ����

11. substr ���� / �ð����⵵
O(len) : �κ� ���ڿ��� ���� �����ؼ� ��ȯ �� �ſ� ū ���ڿ� �ݺ� ���� ���� ����

�ſ� ���� ���� string_view�� ����ȭ ���(���� �� ��)

12. FAQ & �Ǽ��ϴ� ����Ʈ
Q : substr(����, 0)�� ���� ���� ?

A : �׻� �� ���ڿ� ��ȯ

Q : substr�� ���ϰ��� string�ΰ� ?

A : ��, �׻� string ��ü(���纻)�� ��ȯ��

Q : substr�� �ε��� ������ ����� ?

A : pos�� ���� ���̸� ����, len�� ��� ����

