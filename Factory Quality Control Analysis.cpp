#include<iostream>
using namespace std;
float quality[7][3];
int i, j;
void input()
{
	int sum;
	for (i = 0; i < 7; i++)
	{
		cout << "Enter Product quality of day " << i + 1 << endl;
		for (j = 0; j < 3; j++)
		{
			cout << "Shift " << j + 1 << ": ";
			cin >> quality[i][j];
		}

	}

	float perdaydef[7];

	for (i = 0; i < 7; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += quality[i][j];
		}
		perdaydef[i] = sum / 3;
		cout << "Average Defect of Day " << i + 1 << " is " << perdaydef[i] << endl;
	}

	float pershiftdef[3];
	for (j = 0; j < 3; j++)
	{
		sum = 0;
		for (i = 0; i < 7; i++)
		{
			sum+= quality[i][j];
		}
		pershiftdef[j] = sum / 7;
		cout << "Average Defect of Shift " << j + 1 <<" is "<< pershiftdef[j] << endl;
	}

	bool found = false;
	for (j = 0; j < 3; j++)
	{
		if (pershiftdef[j] > 10)
		{
			cout << "Critical shift is Shift " << j + 1 << " with " << pershiftdef[j] << "% defects.\n";
			found = true;
		}

	}
	if (!found)
	{
		cout << "No critical shift found ";
	}

}
int main()
{
	input();



	return 0;
}