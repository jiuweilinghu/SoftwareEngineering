#pragma once
#include<string>
#include <algorithm>

using namespace std;

class ArraysGenerate
{
public:
	int* toGenerate();         //生成一个随机数组
private:
	string str = "123456789";   //生成随机数组的原始字符串
	int array[10];            //存放所生成的随机数组
};