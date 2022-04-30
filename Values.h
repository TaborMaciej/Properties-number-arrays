#pragma once
#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> *numbers);
class Values
{
public:
	static int Min(vector<double> numbers);
	static int Max(vector<double> numbers);
	static double Mean(vector<double> numbers);
	static double Median(vector<double> numbers);
	static int Mode(vector<double> numbers);

};


