2. auto it = find(arr.begin(), arr.end(), minVal);


�ǹ� : ������ Ÿ���� �ڵ� �߷����ִ� ���(C++11���� ����)

STL ���� Ÿ���� �ʹ� ����� �� �ڵ����� Ÿ���� ������

���� :
auto x = 5;      // int
auto y = 3.14;   // double
auto s = "abc";  // const char*




find()�� auto

find(arr.begin(), arr.end(), ��)�� iterator(�ݺ���)�� ��ȯ

�ݺ����� Ÿ����
vector<int>::iterator(int vector�� ��)
��¥�� ���� vector<int>::iterator it = ...ó�� ��

auto it = ...��� �ϸ� Ÿ���� �����Ϸ��� �˾Ƽ� �߷����� �� �ڵ� ª������, STL�� �� ���ϰ� �� �� ����



����:

vector<int> arr = { 4, 3, 2, 1 };
int minVal = 1;
auto it = find(arr.begin(), arr.end(), minVal); // it�� arr���� 1�� ����Ű�� iterator
if (it != arr.end()) arr.erase(it);
