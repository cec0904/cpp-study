#include <string>
#include <vector>

using namespace std;

//  "target" ���� �Լ�
// ������ ���������� ������ 3�ܰ�, �ƴϸ� 1�ܰ� ��ȯ
int func1(int humidity, int val_set) {
    if (humidity < val_set)
        return 3;
    return 1;
}

// ������ �ΰ�(humidity, val_set)�� �޾Ƽ� 0 �Ǵ� 1�� ���������� ��ȯ�ϴ� �Լ� fuc1
// int func3(...) ��** ���� Ÿ���� int** ��� ��(���� �ϳ��� ��ȯ)
// humidity�� val_set �� �� �� int Ÿ���� �Ű�����
// return 1; �Ǵ� return 0; �� ���ǿ� ���� ���� ���� ��ȯ
// target ���� �Լ����� humidity �� val_set ���� ������ 3�� ��ȯ �׷��� ������ 1�� ��ȯ
// else �� �����Ǿ� �־ �ȴ�
// if ������ true �� return 3; ���� �Լ��� ����
// return 1; �� if �� false �� ���� ����
// 
//          if(humidity < val_set) {
//          return 3;  // ������ ���� ���� ���⼭ �Լ� ����
//          }
//          // ������ ������ ���� �Ʒ� �����
//          return 1;
//
//if ��� �ȿ� return�̳� break, continueó��
//�帧�� ����Ǵ� ��ɹ��� ���� ���, else�� �����ص� �ƹ� ������ ����
//
//������ �ڵ带 �� ����ϰ� ����⵵ ��
//





//  "auto" ���� �Լ�
// ���� ������ ���� 0~5�ܰ� ��ȯ
int func2(int humidity) {
    if (humidity >= 50)
        return 0;
    else if (humidity >= 40)
        return 1;
    else if (humidity >= 30)
        return 2;
    else if (humidity >= 20)
        return 3;
    else if (humidity >= 10)
        return 4;
    else
        return 5;
}

//  "minimum" ���� �Լ�
// ���������� ������ 1�ܰ�, �ƴϸ� 0�ܰ� ��ȯ
int func3(int humidity, int val_set) {
    if (humidity < val_set)
        return 1;
    return 0;
}

//  ��忡 ���� �ش� �Լ� ȣ�� �� ����� ��ȯ
int solution(string mode_type, int humidity, int val_set) {
    int answer = 0;

    if (mode_type == "auto") {
        answer = func2(humidity);
    }
    else if (mode_type == "target") {
        answer = func1(humidity, val_set);
    }
    else if (mode_type == "minimum") {
        answer = func3(humidity, val_set);
    }

    return answer;
}


// ���� �Ѱ�: answer = func2; -> '�Լ��� ȣ��'�ϴ� �� �ƴ϶� �׳� '�Լ� �̸� + ����'�� �߸� ���� ����
// �̰� �Լ� ȣ���� �ƴ϶� �Լ� �̸��� ���ڰ� ���� ������ �־ ���� ������ ���� ��Ȳ

// �ùٸ� ���: answer = func2(humidity); -> ��ȣ�� ȣ�� + ���� �ֱ�

���� ���� ��ȣ ���ǥ

==          ����            x==10
!=          �����ʴ�        x != 5
>           ũ��            x>7
<           �۴�            x<3
>=          ũ�ų� ����     x>=8
<=          �۰ų� ����     x<=10
&&          �׸���(AND)     a&&b
!           ����(NOT)       !a(a�� false�� true)


