/*
��������һ��������1~9��ɵ�����
*/
#include "ArraysGenerate.h"

int* ArraysGenerate::toGenerate(){

	while (next_permutation(str.begin(), str.end()) &&str[4]=='5') {
		/**
		next_permutation(str.begin(), str.end())
		�������Խ��ַ�������ȫ���У�											  
		ʹ��ʱҪ����algorithmͷ�ļ���
		���⣬Ҫ���������Ͻ�Ϊ���ź���λ��Ӷ�9ȡģ�ټ�һ��
		�ҵ�β��Ϊ13���������ϽǺ�Ϊ5��
         */

		for (int i = 1; i <= 9; i++)
		{
			array[i] = str[i - 1] - 48;      //�ַ�תΪ����
		}
		break;
	}
	
	return array;
}

