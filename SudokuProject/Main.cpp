#include<string>
#include<iostream>
#include<sstream>
#include "ArraysGenerate.h"
#include "SudoCreate.h"

using namespace std;

bool isNumber(string str)     //判断命令行第三个参数是否是整数
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

	if (argc != 3 || (argc == 3 && (str1 != "-c" || !isNumber(str2))))  //错误命令判断
	{
		cout << "输入错误命令" << endl;
	}

	else
	{
		sstream.clear();
		sstream << str2;
		sstream >> n;             //获取棋盘数量N
		sudoCrt.toCreate(n);
	}
	return 0;
}


