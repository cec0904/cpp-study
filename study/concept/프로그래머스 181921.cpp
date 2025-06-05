#include <string>
#include <vector>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;    // ������ ������ ���ڵ��� ������ ����

    for (int i = l; i <= r; i++) {  // l���� r���� ��� ������ Ȯ��
        string s = to_string(i);    // ���ڸ� ���ڿ��� ��ȯ
        int j;

        // ���ڿ� s�� �� ����(����)���� ��ȸ
        for (j = 0; j < s.size(); j++) {
            // ���� ���ڰ� '0'�� �ƴϰ� '5'�� �ƴ϶��
            if (s[j] != '0' && s[j] != '5') {
                break;  // ���� �Ҹ��� �� ��� for�� Ż��
            }
        }

        // ���� for���� ������ �� ��� (��, ��� ���ڰ� '0' �Ǵ� '5')
        if (j == s.size()) {
            answer.push_back(i);  // �迭�� ���ڸ� �߰�
        }
    }

    // ������ ������ ���ڰ� �ϳ��� ������ -1 �߰�
    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;  // ��� ��ȯ
}





#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        string s = to_string(i);

        // 0�� 5�� �����ϴ� �������� üũ
        bool valid = true;
        for (char c : s) {
            if (c != '0' && c != '5') {
                valid = false;
                break;
            }
        }

        if (valid) {
            answer.push_back(i);
        }
    }

    // ���� �ƹ� ���� ���ٸ� -1�� �����ϵ���
    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}



//
// 0�� 5�θ� �̷���� -> 0�� 5�� �̷���� ���� �ʴٸ� ���Խ�Ű�� ���ƶ�
// 
//