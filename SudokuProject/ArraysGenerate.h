#pragma once
#include<string>
#include <algorithm>

using namespace std;

class ArraysGenerate
{
public:
	int* toGenerate();         //����һ���������
private:
	string str = "123456789";   //������������ԭʼ�ַ���
	int array[10];            //��������ɵ��������
};