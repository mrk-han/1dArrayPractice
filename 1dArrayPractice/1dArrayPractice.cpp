// 1dArrayPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main(void)
{
	int myInts[10];
	int i;
	int sum = 0;
	float mean, sd = 0;

	for (i = 0; i < 10; i++) {
		cout << "please enter a number " << endl;
		cin >> myInts[i];
		sum += myInts[i];
	}
	mean = sum / 10;
	cout << "mean is " << mean << endl;

	for (i = 0; i < 10; i++) {
		sd += pow(myInts[i] - mean, 2);
		cout << myInts[i] << endl;
	}
	cout << "The standard deviation is " << sqrt(sd / 10) << endl;
}

