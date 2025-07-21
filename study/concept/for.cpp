1. �⺻ �ε��� for��

vector<int> arr = { 10, 20, 30, 40 };
for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
}
�ε����� �ʿ��� �� ���

arr[i]�� ���ҿ� ����

2. ���� ��� for��(����)

for (int x : arr) {
    cout << x << endl;
}
arr�� ���� �ϳ��� x�� �����ؼ� �ݺ�

x�� �ٲ㵵 arr ������ ���� ����

3. ���� ��� for��(����)

for (int& x : arr) {
    x += 100;
}
&x: x�� arr ���� ��ü�� ����

x�� �ٲٸ� arr ���� �ٲ�

4. ���� ��� for��(��� ����)

for (const int& x : arr) {
    cout << x << endl;
}
x�� ���� ���� ����

���� ��� ���� �б⸸ �� �� ���(���ɡ�)

5. ���� �ݺ�

for (int i = arr.size() - 1; i >= 0; i--) {
    cout << arr[i] << endl;
}
�ڿ��� ������ ����

6. �ݺ���(iterator) ���

for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
    cout << *it << endl;
}
*it: ���� ���� ��

���� / ���� �۾� ��� ���� ���

7. const_iterator(�б� ���� �ݺ���)

for (vector<int>::const_iterator it = arr.cbegin(); it != arr.cend(); ++it) {
    cout << *it << endl;
}
���� �ٲ� �� ����

�б� ���� �ݺ�

8. C++17 structured binding(¦��, Ȧ�� ����)

vector<pair<int, int>> vp = { {1, 2}, {3, 4} };
for (auto& [a, b] : vp) {
    cout << a << ", " << b << endl;
}
pair, tuple ��� ���� ���� �� ���� ���� �� ��