/*
用以生成一个由数字1~9组成的数组
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate() {

	if (next_permutation(str.begin(), str.end()) )
	{
		for (int i = 0; i < 9; i++)
		{
			array[i] = str[i] - 48;      //字符转为数字
		}
	}

	return array;
}

