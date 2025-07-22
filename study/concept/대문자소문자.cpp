�빮�� A�� �ƽ�Ű �ڵ� ���� 65, �ҹ��ڴ� 97
�빮�� Z�� �ƽ�Ű �ڵ� ���� 90, �ҹ��ڴ� 122

1. �ƽ�Ű �ڵ� ���� ���̴� 32

�빮�� -> �ҹ���
�빮�� A���� 32�� �����ֱ�

�ҹ��� -> �빮��
�ҹ��� a���� 32�� ���ֱ�


2. toupper, tolower

��� : <cctype> �Ǵ� <ctype.h>

���� : char �빮�� = toupper(char �ҹ���);

#include <iostream>
#include <cctype> // toupper

int main() {
    char ch = 'a';
    std::cout << toupper(ch) << std::endl; // 'A'
    std::cout << toupper('z') << std::endl; // 'Z'
    std::cout << toupper('G') << std::endl; // 'G' (�빮�ڴ� �״��)
	std::cout << tolower('A') << std::endl; // 'a' (�빮�ڸ� �ҹ��ڷ�)
}

3. transform

��� : <algorithm>

���� : transform(����, ��, ���_����_��ġ, ��ȯ�Լ�);

#include <iostream>
#include <string>
#include <algorithm> // transform
#include <cctype>    // toupper

int main() {
    std::string str = "AbCdEfG";
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    // str�� �� ���ڿ� toupper�� �����Ͽ� str�� ����
    std::cout << str << std::endl; // "ABCDEFG"
}

����:

str.begin(), str.end() : ��ȯ�� ����

str.begin() : ��ȯ ����� ��� ��������(���⼱ �ڱ� �ڽſ� �����)

::toupper : �� ���ҿ� ������ �Լ�(���⼭�� �빮�ڷ� �ٲٴ� �Լ�)

::toupper����::�� �����Լ����� ���(���� ���ӽ����̽� ���� ���Ϸ��� ��)


���� ��ȯ �ڵ� ����
1 �ݺ��� + toupper

std::string str = "HelloWorld";
for (int i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
}


2 transform + toupper

#include <algorithm>
#include <cctype>

std::string str = "HelloWorld";
std::transform(str.begin(), str.end(), str.begin(), ::toupper);







-toupper: ����(char) 1���� �빮�ڷ� ��ȯ, �ݺ����� ���� ���
- transform : �����̳�(���ڿ�, ���� ��) ��ü�� ��ȯ �Լ� ����, �� �ٷ� ó�� ����
- ���ڿ��� �빮�ڷ� : transform(str.begin(), str.end(), str.begin(), ::toupper)
- ��� : <algorithm>, <cctype>


�浹�ϴ� ���(toupper �տ� :: �� ���̴� ����)

#include <iostream>
#include <string>
#include <algorithm> // transform
#include <cctype>    // toupper

using namespace std;

// 1. ����� ���� toupper
int toupper(int x) {
    cout << "����� ���� toupper ȣ���!" << endl;
    return x + 1;
}

int main() {
    string str = "AbCdEfG";

    // 2. ����(::)�� ���̸� Cǥ�� toupper�� ����!
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    // => �� ���� ��¥�� �빮�� ��ȯ��

    cout << str << endl; // "ABCDEFG"
}

�׳� toupper�� ���� ���� ���� ����� �Լ��� ȣ���(���� ��ȯ�� �ƴ�)

::toupper�� ���� Cǥ�� ���̺귯�� �Լ��� ȣ��ż� ���� �빮�ڷ� ��ȯ


