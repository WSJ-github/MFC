#include"stdafx.h"
#include"W32.h"
#include"math.h"
int factorial(int n)
{
	int sum=1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}

float FAC::convert(float deg)
{
	//float pi = asin(30.0) * 6;   //计算出π的值
	float radian = deg*(3.14/180);
	return radian;
}
