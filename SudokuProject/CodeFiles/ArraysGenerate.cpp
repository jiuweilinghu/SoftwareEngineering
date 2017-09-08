/*
用以生成一个由数字1~9组成的数组
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate(){

	if (next_permutation(str.begin(), str.end()) ) //此函数可以将字符串进行全排列，											  
	{                                              //使用时要包含algorithm头文件
		for (int i = 1; i <= 9; i++)
		{
			array[i] = str[i - 1] - 48;
		}
	}
	
	return array;
}

