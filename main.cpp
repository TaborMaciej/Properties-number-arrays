#include "Values.h"

int main()
{
	cout << "How many numbers will you input? ";
	int size;
	cin >> size;
	vector<double> numbers;
	double temp = 0.0;
	for(int i = 0; i < size; i++)
	{
		cout << "Input nr. " << i + 1 << ": ";
		cin >> temp;
		numbers.push_back(temp);
	}
	cout << "Maximum value: " << Values::Max(numbers) << endl
		<< "Minimum value: " << Values::Min(numbers) << endl
		<< "Arithmetic mean: " << Values::Mean(numbers) << endl
		<< "Median: " << Values::Median(numbers) << endl
		<< "Mode: " << Values::Mode(numbers) << endl;
}
