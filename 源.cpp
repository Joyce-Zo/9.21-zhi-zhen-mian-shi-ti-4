#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main() 
{
	 const char* a[] = { "work", "at", "alibaba" };
	 char** pa = a;
	  pa 内的类型是char* a的首元素地址
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
			存cp的首元素(c+3)的地址	
	printf("%s\n", **++cpp);
				 *(++cpp)=POINT的地址，再*解引用得到字符point
	printf("%s\n", *--* ++cpp + 3);
				 *(++cpp)=*(c+1)，再--得""ENTER"的地址，再*解引用得到E,再+3得到(ENT)ER的ER
	printf("%s\n", *cpp[-2] + 3);
				cpp[-2]=*(cpp-2)=(cpp+1)-2得到(cpp+3)的地址，*得到FIRST，+3打印ST
	printf("%s\n", cpp[-1][-1] + 1);
				cpp[-1][-1]=*(*(cpp-1)-1)=(cpp+2)-1解引用再-1得到NEW的地址,再*+1得到EW
		前2个printf里 --、++是运算，改变cpp的值，下面2个+3+1不改变app的值
	return 0;
}

int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
				的首元素6的地址
	*(pulPtr + 3) += 3;
	   首元素+3 - 9的地址，+3解引用 - 将9改为12，数组成[6,7,8,12,10]
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
						6			12
	return 0;
}

				写函数，将输入的字符串逆序
#include<string.h>
#include<assert.h>
void reverse(char* arr)
{
	assert(arr);//断言
	int len = strlen(arr);
	char* left = arr;
			arr 首元素地址
	char* right = arr + len - 1;
			arr + len-1得到最后一个元素
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
	  scanf 遇到 空格 不再读取
	gets_s(arr);	// gets 读取一行，无论有无空格
	reverse(arr);
	printf("逆序后的字符串是%s ", arr);
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