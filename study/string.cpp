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