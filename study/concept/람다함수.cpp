C++ ���� �Լ�(Lambda Function)
1. �⺻ ����
[capture](parameters) -> return_type {
    body
}


capture: �ٱ� �������� �������� ���(ĸó)

parameters : �Լ� �Ű�����

->return_type : ��ȯ��(���� ����, �����Ϸ��� �߷�)

{
    body
} : ������ �ڵ�

2. ���� ��� �� ����

1. Capture(ĸó)

���ٿ��� �ܺ� ������ ��� ���� �����ϴ� �κ�.

[] : �ƹ��͵� �� ������

[x] : ���� x�� ��(value)���� �����ؼ� ���

[&x] : ���� x�� ����(reference)�� ������

[=] : ���� �������� ��� ������ ������ ����

[&] : ���� �������� ��� ������ ������ ���

[=, &y] : �⺻�� �� ��������, y�� ����

[&, x] : �⺻�� ��������, x�� �� ����

�� :

    int a = 10, b = 20;
    auto f1 = [=]() { return a + b; };   // a,b �� ����
    auto f2 = [&]() { return a + b; };   // a,b ����
    auto f3 = [a, &b]() { return a + b; }; // a�� ��, b�� ����

    Parameters(�Ű�����)

        ���� �Լ� �Ű�����ó�� �ۼ�.

        [](int x, int y) { return x + y; }

        3. Return type(��ȯ��)

        ���� ���� ����.������ ��ȣ�� ���->�� ����.

        [](int x, int y) -> double { return (x + y) / 2.0; }

        4. Body(����)

        ���� ������ �ڵ�.

        [](int x) { return x * x; }

3. ����


    1. ���� �ܼ��� ����
        auto f = []() { return 42; };
    cout << f(); // 42

    2. �Ű����� �ִ� ����
        auto add = [](int a, int b) { return a + b; };
    cout << add(3, 4); // 7

    3. �ܺ� ���� ĸó
        int n = 5;
    auto mul = [n](int x) { return x * n; }; // n�� ������ ĸó
    cout << mul(10); // 50

    4. sort���� ���� ���̴� ����
        vector<int> v = { 5, 3, 8, 1 };

    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b; // �������� ����
        });

    4���ٿ� �Ϲ� �Լ� ��

        �Ϲ� �Լ� :

    bool cmp(string a, string b, int n) {
        if (a[n] == b[n]) return a < b;
        return a[n] < b[n];
    }


    ���� �Լ� :

    sort(strings.begin(), strings.end(), [n](string a, string b) {
        if (a[n] == b[n]) return a < b;
        return a[n] < b[n];
        });


    ������ : sort �ȿ� ���� �Ｎ���� �Լ� ���� ���� �� �ڵ� ����, ������ �ʿ� ���� �� ����.

        5����

        �ڵ尡 ��������

        �ܺ� ������ ĸó�ؼ� Ȱ�� ����

        sort, for_each, find_if ���� �˰��� �Լ��� ��������

        ���� ���� :

    ���� �Լ��� �۰� ��ȸ�� �Լ��� �ڵ� �ȿ��� ���� ������ �� �ִ� ����.
        [] �ȿ��� �ܺ� ���� ĸó ����� �����ϰ�, () �ȿ��� �Ű������� �޾� {} �ȿ��� ������ �����Ѵ�.
        Ư�� sort ���� ǥ�� �˰��򿡼� �� �Լ��� ���� ���ȴ�.