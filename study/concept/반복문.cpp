if (answer.size() < 3) {
    answer += "o";
}

answer �� 4���� ������ �ҹ��� o�� �ڿ� �ٿ� 4�� �ɶ����� �����
�Է� �� : GK
��� �� : GKoo

�߸��� ���(���� �Ѱ�) : if (answer.size() < 3) {
    for (int i = 0; i < answer.size(); i++) { answer += "o"; }
}

���� : for ������ ������ �߸���
answer = "GK" �� ��:
answer.size()=2
-> for (int i = 0; i < 2; i++)
ù ���� -> answer += "o" �� "GKo" (size : 3)
�� ��° ���� -> answer += "o" �� "GKoo" (size : 4)

 ������ 1: ������ ó�� ���̿� ������
for (int i = 0; i < answer.size(); i++)����
    answer.size()�� �ݺ� �߿� ��� Ŀ���µ�, i�� 1�� ������ ��.

    ���� � ��Ȳ������ i�� answer.size()���� ���� �ʰ� �Ǿ� �ǵ����� ���� �ݺ��� ���� �ְ�,

    �ݴ�� answer.size()�� ���ϸ鼭 ����� �ٸ� �ݺ� Ƚ���� �� ���� �־��.

    ���� ��� answer = "A"��:

ó�� size = 1 �� i < 1 �� �� �� ���� �ݺ� �� "Ao" (���ϴ� "Aooo" �ƴ�)

 ������ 2 : �ݺ� Ƚ���� ������ ���� ����
    ���ڿ� ���̸�** ��ǥ��(�� : 4)** ���� ��Ȯ�� ����� �ϴµ�,

    ���� ������ "���� ���̸�ŭ �ݺ�"�̶�, ��ǥ�� �����ϴ��� �������� ����.


     �ùٸ� �ذ� ���
��� 1: while ����(���� ������)
while (answer.size() < 4) {
        answer += "o";
    }

������ true �� ���� �ݺ��ؼ� �ڵ� ����

������ false�� �Ǹ� �ݺ� ����




��� 2: string �����ڷ� �ʿ��� ��ŭ �� ���� ���̱�

if (answer.size() < 4) {
    answer += string(4 - answer.size(), 'o');
}




C++���� for���� ����(�Ǵ� ������)�� �ݺ����� ����� ������ ���� ���� �����ϴ� �κ��Դϴ�.�Ϲ������� i++ (1�� ����), i-- (1�� ����), i += 2 (2�� ����) �� ���� ���˴ϴ�.������ �����Ͽ� �ݺ� ������ ������ �� �ֽ��ϴ�.

�⺻ ���� :
for (�ʱ�ȭ��; ���ǽ�; ������) {
    // �ݺ��� �ڵ�
}

����:
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = 0; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}

