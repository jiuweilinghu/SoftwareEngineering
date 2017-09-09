/*
用以生成一个由数字1~9组成的数组
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate(){

	while (next_permutation(str.begin(), str.end()) &&str[4]=='5') {
		/**
		next_permutation(str.begin(), str.end())
		函数可以将字符串进行全排列，											  
		使用时要包含algorithm头文件。
		另外，要求棋盘左上角为座号后两位相加对9取模再加一，
		我的尾号为13，所以左上角恒为5。
         */

		for (int i = 1; i <= 9; i++)
		{
			array[i] = str[i - 1] - 48;      //字符转为数字
		}
		break;
	}
	
	return array;
}

