#include <iostream>
#include <string>

using namespace std;

//
// 
// 
// 
// 
// 
// string �� ���� �������� ���� ��(���ڿ�)



//���ڿ� ���̱�(+)�� ������
//��1:

string s1 = "12";
string s2 = "34";
string s3 = s1 + s2; // "1234"


//to_string(): ���� -> ���ڿ�
//��1:

int a = 12;
string s = to_string(a); //"12"

//stoi():���ڿ� -> ����(string to integer)
// ���ڿ��� ���ڷθ� ������ �־�� ��
// 123 o 12a x
//��1:

string s = "123";
int n = stoi(s);// 123 (int Ÿ��)


#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    string ab = to_string(a) + to_string(b);
    int ab_num = stoi(ab);

    if (ab_num > (2 * a * b)) {
        answer += stoi(ab);
    }
    else if (ab_num < (2 * a * b)) {
        answer += 2 * a * b;
    }
    else {
        answer += stoi(ab);
    }


    return answer;
}




#include <string>       // ���ڿ� ���� �Լ��� ����ϱ� ���� ����
#include <vector>       // ���� �ڷ��� ����� ���� ����

using namespace std;    // ǥ�� ���ӽ����̽��� ��� (std:: ����)

int solution(vector<int> num_list) {      // ���� ���� num_list�� �޾� ó���ϴ� �Լ� ����
    int answer = 0;                       // ���������� ��ȯ�� ���� answer�� 0���� �ʱ�ȭ

    string a_str = "";  // Ȧ�� ���ڿ�
    // Ȧ�� ���ڵ��� �̾�ٿ� ���ڿ��� ���� ���� a_str�� �� ���ڿ��� �ʱ�ȭ
    string b_str = "";  // ¦�� ���ڿ�
    // ¦�� ���ڵ��� �̾�ٿ� ���ڿ��� ���� ���� b_str�� �� ���ڿ��� �ʱ�ȭ

    for (int i = 0; i < num_list.size(); i++) {  // num_list�� ��� ���Ҹ� �ϳ��� Ȯ��
        if (num_list[i] % 2 == 1) {              // �ش� ���ڰ� Ȧ���̸�
            a_str += to_string(num_list[i]);     // a_str�� �� ���ڸ� ���ڿ��� ��ȯ�Ͽ� �̾����
        }
        else {                                 // �ش� ���ڰ� ¦���̸�
            b_str += to_string(num_list[i]);     // b_str�� �� ���ڸ� ���ڿ��� ��ȯ�Ͽ� �̾����
        }
    }

    // ��) a_str = "531", b_str = "8"

    int a = stoi(a_str); // a_str�� �̾���� ���ڿ��� ������ ��ȯ�Ͽ� a�� ���� ("531" �� 531)
    int b = stoi(b_str); // b_str�� �̾���� ���ڿ��� ������ ��ȯ�Ͽ� b�� ���� ("8" �� 8)

    answer = a + b;      // a�� b�� ���� ����� answer�� ���� (531 + 8 = 539)

    return answer;       // ���� ����� ��ȯ
}


string a_str = ""; �� �� 0���� �ʱ�ȭ���� �ʴ��� ?

a_str�� ���ڿ�(string) �ڷ����̿���.

string�� ���������δ� ������ �迭(���ڿ� ��ü) ���·� �����Ǿ� �ֽ��ϴ�.

C++���� string�� ������ �� :

�� ���ڿ�("")�� �ʱ�ȭ�ϸ� ������ ���ٴ� ���̰�, �޸� �󿡼� ũ�Ⱑ 0�� ���ڿ��� �˴ϴ�.

������(int, double ��)ó�� 0���� �ʱ�ȭ�ϴ� ���� �ƴ϶�, �� ���ڿ��� �ʱ�ȭ�ϴ� ���� �Ϲ����Դϴ�.

���� string a_str = 0; ó�� ����

Ÿ���� ���� �ʾ� ������ ������ �߻��մϴ�.



string Ÿ�Կ��� += �����ڴ� "����ó�� ���ϱ�"�� �ƴ϶� �ڿ� �̾���̴� ������ �մϴ�.

a_str += "5"; ��� �ϸ� a_str�� "5"��� ���ڿ��� �ڿ� �̾�ٽ��ϴ�.

��: a_str = "53"�̰� "1"�� ���ϸ� �� a_str = "531"

��, ������ ���ڿ� �ڿ� ���ο� ���ڿ��� �����̴� ��(���ڿ� ����, Concatenation)�Դϴ�.


����ó���ϱ�

int a = stoi(a_str); 
int b = stoi(b_str);


int a = a_str.empty() ? 0 : stoi(a_str);
int b = b_str.empty() ? 0 : stoi(b_str);

a_str.empty()�� true��(�� a_str�� ���������) 0�� ��ȯ�ϰ�
�ƴϸ� stoi(a_str)�� ��ȯ�մϴ�.

a_str���� ��� �ϳ��� Ȧ���� �ִٸ� ���� ����ֽ��ϴ�.

�־��� ����({ 5,3,1,8 })������ Ȧ���� �ݵ�� �����ϱ� ������, 
a_str.empty()��** ����(false)** �� �Ǿ� stoi(a_str)�� ����˴ϴ�.

��, ���� ��Ȳ������ a_str.empty()�� ���� �Ǵ� ��Ȳ�� �� ������ �ʾƿ�.

������

������ġ ������ �Ѵٴ� ��

���࿡ num_list�� ���� ¦��({ 2,4,6,8 })���:
a_str.empty()�� true�� �Ǿ stoi(a_str) ȣ���� ���� �� ����
�׷��� ������ stoi("")�� ȣ��Ǹ鼭 ��Ÿ�� ������ �߻���

stoi(a_str)�� ȣ���ϱ� ���� a_str�� ������� Ȯ�����ִ� �ڵ尡 
������ �������ִ� ������ �մϴ�.
