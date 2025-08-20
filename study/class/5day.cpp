#include <stdio.h>


int Add(int a, int b)
{
	return a + b;
}



// 함수
int main()
{
	
	


	int iData = Add(100, 200);

	// 반복문
	//for (/*반복자 초기화*/;/*반복자 조건 체크*/;/*반복자 변경*/)
	//{

	//}


	// 0, 1, 2, 3
	for (int i = 0; i < 4; ++i)
	{
		
		// 홀수만 하겠다
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output Test\n");
			
		//continue; // 현재 반복을 건너뛰고 다음 반복으로 넘어감

		//break; // 반복문을 즉시 종료함
	}


	//int i = 0;
	//while (/*조건체크*/ i < 2)
	//{
	//	//조건이 참이어야 반복문 수행
	//	printf("Output Test\n");

	//	++i;
	//}


	//while()







	return 0;
}

