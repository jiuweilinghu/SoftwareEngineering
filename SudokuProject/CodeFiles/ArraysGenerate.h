#pragma once
#include<string>
#include<iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;

class ArraysGenerate
{
public:
	int* toGenerate();
private:
	string str="123456789";   //生成随机数组的原始字符串
	int array[10];            //存放所生成的随机数组
};

