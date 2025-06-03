#define HUNGRY 1
// 전처리기
// 1. 가독성
// 2. 유지보수




int main() {


	int iTrue = 100;

	int data = 0;

	// 비교 연산자
	// 
	// == 양쪽 피연산자가 같은면 true
	// != 양쪽 피연산자가 다르면 true
	// <, > 오른쪽이 크니, 왼쪽이 크니
	// <=, >= 같은 경우도 참으로 본다

	// 구문
	// if, else
	
	data = 0;
	if (100 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if 가 참인 경우 수행
	}
	// else
	// {
	// 	 if 가 거짓인 경우 수행
	// }

	//else if는 반드시 else보다 앞에 있어야 합니다.
	
	else if (100)
	{

	}
	else
	{
		// 모든 조건이 다 실패했을 때 마지노선
		// else 가 없으면 아무것도 실행 안됨
	}




	// sitch 구문

	switch (10)//원하는 특정 상수, 변수

	{
	case 10:
		// 일치하면 실행
		break;

	case 20:

		break;

	default:
		// 모두 다 불일치면 default
		break;
	}


	int iTest = 10;
	if (iTest == 10)
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}
	
	if (iTest == 10 || iTest == 20 || iTest == 30)
	{

	}
	else
	{

	}


	// 삼항 연산자
	// :?

	iTest == 20 ? iTest = 100 : iTest = 200;
	// 값에 20을 넣었을 때
	// 참이면 100 거짓이면 200 수행

	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}



	// 비트 연산자
	// 비트단위로 연산
	// 쉬프트 << , >> 
	unsigned char byte = 1;

	byte << 1; //왼쪽으로 1칸 밀겠다, 2의1승 만큼 증가

	// byte = byte << 1
	// byte <<= 1

	byte >>= 1; //오른쪽으로 1칸 밀겠다, 2분의 1만큼 증가
	// 나머지가 생길 수 있음(홀수 일 때)
	// 2로 나눈 몫

	// 비트 곱(&), 합(|), xor(^), 반전(~)
	// 비트단위로 연산을 진행
	// & : 둘 다 1인 경우 1
	// | : 둘 중 하나라도 1 이면 1
	// xor : 같으면 0, 다르면 1
	// ~ : 1은 0으로, 0은 1로

	// 예시, 
	
	int iStatus = HUNGRY;
	

	return 0;
}