최대공약수
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

최소공배수
int lcm(int a, int b) {
    return (long long)a * b / gcd(a, b);
}




#include <iostream>
#include <vector>
#include <numeric>  // gcd, lcm (C++17~) 
//#include <algorithm> // lcm (C++17~)

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);   // 최대공약수
    int l = lcm(n, m);   // 최소공배수
    answer.push_back(g);
    answer.push_back(l);
    return answer;


}

int main() {
    vector<int> result = solution(3, 12);
    cout << result[0] << " " << result[1] << endl; // 출력: 3 12
}





#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    int gcd = __gcd(n, m);
    int lcm = (long long)n * m / gcd;

    answer.push_back(gcd);
    answer.push_back(lcm);

    return answer;
}

