/*
��������һ��������1~9��ɵ�����
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate() {

	if (next_permutation(str.begin(), str.end()) )
	{
		for (int i = 0; i < 9; i++)
		{
			array[i] = str[i] - 48;      //�ַ�תΪ����
		}
	}

	return array;
}

