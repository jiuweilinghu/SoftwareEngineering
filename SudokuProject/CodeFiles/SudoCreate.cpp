/*
���Բ����������������
*/

#include "SudoCreate.h"
#include "ArraysGenerate.h"

void SudoCreate::toCreate(int n) {
	ArraysGenerate aryGene;
	int *ptr;
	int line;
	int row;

	for (int count = 0; count < n; count++) {
		ptr = aryGene.toGenerate();     //��ȡ�������

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				sudo[i][j] = ptr[sudo[i][j]];   //����������
			}
		}

		if (sudo[0][0] != 5)                 //Ҫ���������Ͻ�Ϊ���ź���λ��Ӷ�9ȡģ�ټ�һ��
		{                                    //�ҵ�β��Ϊ13���������ϽǺ�Ϊ5�������������Ͻǲ�Ϊ5
			for (int i = 0; i < 3; i++)      //Ҫ���е���
			{
				for (int j = 0; j < 3; j++)
				{
					if (sudo[i][j] == 5)
					{
						line = i;          //��¼5�������ϽǾŹ����е�λ��
						row = j;
						break;
					}
				}
			}

			if (line != 0)
			{
				for (int i = 0; i < 9; i++)
				{
					swap(sudo[line][i], sudo[0][i]);  //�б仯
				}
			}
			if (row != 0)
			{
				for (int i = 0; i < 9; i++)
				{
					swap(sudo[i][0], sudo[i][row]);   //�б仯
				}
			}
		}
		printSudo();
	}
}

void SudoCreate::printSudo() {    //���������
	ofstream outfile("soduku.txt",ios::app);   //�����ļ�������appΪ׷�����ļ�β
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			outfile << sudo[i][j]<<' ';
		}
		outfile << endl;
	}
	outfile << endl;
}

void swap(int a, int b)    //�Զ��庯�������Խ�����������λ��
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}