/*
��������һ��������1~9��ɵ�����
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate(){

	if (next_permutation(str.begin(), str.end()) ) //�˺������Խ��ַ�������ȫ���У�											  
	{                                              //ʹ��ʱҪ����algorithmͷ�ļ�
		for (int i = 1; i <= 9; i++)
		{
			array[i] = str[i - 1] - 48;
		}
	}
	
	return array;
}

