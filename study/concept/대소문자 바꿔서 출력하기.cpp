#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) { 
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // �빮�� �� �ҹ���
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // �ҹ��� �� �빮��
        }
    }

    cout << str;

    return 0;
}

// 10. ���ڿ��� ���̸�ŭ ���� �ϳ��� �ݺ��Ѵ�
// str.size() �� str.length() �� �ᵵ �������
// 
// 11. str[i] -> ���� ����
// ���� ���� ���ڰ� �빮�� ��� �ƽ�Ű �ڵ� �������� 32�� ���ض�
// 
// >= ũ�ų� ���� <= �۰ų� ���� && �� ������ ��� ���� �� ��
// 
// ���־��� ��ȣ ���ǥ - ���ǹ�.cpp 87��°��
// 
// 
// 
// 
// 
// 14. ���������� �ҹ��ڶ�� 32�� ����
// 
// str[i] = str[i] + 32;
//  -> str[i] += 32; �� �ص� �ȴ�
// 
// 
//


