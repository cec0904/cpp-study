#include <stdio.h>


int Add(int a, int b)
{
	return a + b;
}



// �Լ�
int main()
{
	
	


	int iData = Add(100, 200);

	// �ݺ���
	//for (/*�ݺ��� �ʱ�ȭ*/;/*�ݺ��� ���� üũ*/;/*�ݺ��� ����*/)
	//{

	//}


	// 0, 1, 2, 3
	for (int i = 0; i < 4; ++i)
	{
		
		// Ȧ���� �ϰڴ�
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output Test\n");
			
		//continue; // ���� �ݺ��� �ǳʶٰ� ���� �ݺ����� �Ѿ

		//break; // �ݺ����� ��� ������
	}


	//int i = 0;
	//while (/*����üũ*/ i < 2)
	//{
	//	//������ ���̾�� �ݺ��� ����
	//	printf("Output Test\n");

	//	++i;
	//}


	//while()







	return 0;
}

