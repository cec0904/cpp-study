#include <iostream>
#include <string>

using namespace std;

//
// 
// 
// 
// 
// 
// string 은 문자 여러개가 모인 것(문자열)



//문자열 붙이기(+)도 가능함
//예1:

string s1 = "12";
string s2 = "34";
string s3 = s1 + s2; // "1234"


//to_string(): 숫자 -> 문자열
//예1:

int a = 12;
string s = to_string(a); //"12"

//stoi():문자열 -> 정수(string to integer)
// 문자열이 숫자로만 구성돼 있어야 함
// 123 o 12a x
//예1:

string s = "123";
int n = stoi(s);// 123 (int 타입)


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