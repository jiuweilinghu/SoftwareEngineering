#include<string>
#include<iostream>
#include<sstream>
#include "ArraysGenerate.h"
#include "SudoCreate.h"

using namespace std;

bool isNumber(string str)     //�ж������е����������Ƿ�������
{
	int i;

	for (i = 0; i < str.length(); i++)
	{
		if (str[i] > 57 || str[i] < 48)
			break;
	}

	if (i == str.length())
		return true;
	else
		return false;
}

int main(int argc, char *argv[]) {
	SudoCreate sudoCrt;
	stringstream sstream;
	int n;
	string str1, str2;
	
	str1 = argv[1];
	str2 = argv[2];

	if (argc != 3 || (argc == 3 && (str1 != "-c" || !isNumber(str2))))  //���������ж�
	{
		cout << "�����������" << endl;
	}

	else
	{
		sstream.clear();
		sstream << str2;
		sstream >> n;             //��ȡ��������N
		sudoCrt.toCreate(n);
	}
	return 0;
}


