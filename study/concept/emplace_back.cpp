emplace_back()

push_back�� ����ϰ� �� �ڿ� �߰�������, �������� ��ü�� ���� �����ϸ鼭 �߰�.

��ü�� �������� �ʰ� �ٷ� �����ؼ� ���ɻ� ������(Ư�� Ŭ���� / ����ü�� ���).

����

vector<pair<int, int>> vp;
vp.emplace_back(1, 2);  // pair<int,int>(1,2)�� ���� �����Ͽ� �߰�
// ���: vp = {{1,2}}

��

vp.push_back(make_pair(3, 4));   // make_pair �ʿ�
vp.emplace_back(3, 4);           // �� �����ϰ� ����