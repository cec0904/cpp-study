1. �ִ� / �ּҰ� ã��

(1) STL ���� : min_element, max_element
min_element

���� : �����̳�(�迭, vector, string ��)���� ���� ���� ������ iterator�� ��ȯ

���� :

auto it = min_element(����, ��);
int �ּҰ� = *it;


����:
vector<int> arr = { 4, 3, 2, 1 };
auto it = min_element(arr.begin(), arr.end());
int minVal = *it; // 1
max_element


���� : �����̳ʿ��� ���� ū ������ iterator�� ��ȯ


���� :
auto it = max_element(����, ��);
int �ִ밪 = *it;
iterator�� ���� ?

�����̳� �ȿ��� "��ġ"�� ����Ű�� ������ ����� ����

���� ���� * itó�� ����ؼ� ����




(2) ���� �ݺ������� ã��

����(�ּҰ�) :

int minVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < minVal)
        minVal = arr[i];
}



����(�ִ밪) :

int maxVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > maxVal)
        maxVal = arr[i];
}