#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main() 
{
	 const char* a[] = { "work", "at", "alibaba" };
	 char** pa = a;
	  pa �ڵ�������char* a����Ԫ�ص�ַ
	pa++;
	printf("%s\n",*pa); 
	return 0;
	}

int main()
{
	  char* c[] = { "ENTER","NEW","POINT","FIRST" };
	  			   c	  c+1   c+2     c+3
	char** cp[] = { c + 3, c + 2, c + 1, c };
					
	char*** cpp = cp;
			��cp����Ԫ��(c+3)�ĵ�ַ	
	printf("%s\n", **++cpp);
				 *(++cpp)=POINT�ĵ�ַ����*�����õõ��ַ�point
	printf("%s\n", *--* ++cpp + 3);
				 *(++cpp)=*(c+1)����--��""ENTER"�ĵ�ַ����*�����õõ�E,��+3�õ�(ENT)ER��ER
	printf("%s\n", *cpp[-2] + 3);
				cpp[-2]=*(cpp-2)=(cpp+1)-2�õ�(cpp+3)�ĵ�ַ��*�õ�FIRST��+3��ӡST
	printf("%s\n", cpp[-1][-1] + 1);
				cpp[-1][-1]=*(*(cpp-1)-1)=(cpp+2)-1��������-1�õ�NEW�ĵ�ַ,��*+1�õ�EW
		ǰ2��printf�� --��++�����㣬�ı�cpp��ֵ������2��+3+1���ı�app��ֵ
	return 0;
}

int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
				����Ԫ��6�ĵ�ַ
	*(pulPtr + 3) += 3;
	   ��Ԫ��+3 - 9�ĵ�ַ��+3������ - ��9��Ϊ12�������[6,7,8,12,10]
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
						6			12
	return 0;
}

				д��������������ַ�������
#include<string.h>
#include<assert.h>
void reverse(char* arr)
{
	assert(arr);//����
	int len = strlen(arr);
	char* left = arr;
			arr ��Ԫ�ص�ַ
	char* right = arr + len - 1;
			arr + len-1�õ����һ��Ԫ��
	char* tmp = 0;
	while (left < right)
	{
		char tmp =  *left;
		*left =* right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[255] = { 0 };
	scanf("%s", arr);
	  scanf ���� �ո� ���ٶ�ȡ
	gets_s(arr);	// gets ��ȡһ�У��������޿ո�
	reverse(arr);
	printf("�������ַ�����%s ", arr);
	return 0;
}

int main()
{
	int input1 = 0;	//  2
	int input2 = 0; //  5
	scanf("%d%d", &input1, &input2);
	int i = 0;
	int sum = 0;
	int ret = 0; //  2 22 222 2222 22222
	for (i = 0; i < input2; i++)
	{
		ret = ret* 10 + input1;
		sum += ret;
	}
	printf("%d ", sum);
	return 0;
}