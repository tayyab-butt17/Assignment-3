#include<iostream>
using namespace std;
int marks[10][5], i, j;
float StAvgmarks[10];
void input()
{

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << "Enter Marks of Roll no. " << i + 1 << " in subject " << j + 1 << " ";
			cin >> marks[i][j];
		}
		cout << "______________________________" << endl;
	}

}
void topper()
{
	
	for (i = 0; i < 10; i++)
	{

		int sum = 0;
		for (j = 0; j < 5; j++)
		{
			 sum+=marks[i][j];
		}
		StAvgmarks[i] = sum / 5.0;
	
	}
	float highest = 0.0;
	int index;
	for (i = 0; i < 10; i++)
	{
		if (StAvgmarks[i] > highest)
		{
		
		highest = StAvgmarks[i];
		index = i;
		}
	}

	cout << "Top scorer is Roll no. : " <<index +1<<" with average : "<<highest << endl  ;

	for (i = 0; i < 10; i++)
	{
		if (StAvgmarks[i] >= 90)
		{
			cout << "Roll no "<<i+1<<" Got A\n";
		}

		else if (StAvgmarks[i] >= 80)
		{
			cout << "Roll no " << i + 1 << " Got B\n";
		}
		else if (StAvgmarks[i] >= 70)
		{
			cout << "Roll no " << i + 1 << " Got C\n";
		}
		else if (StAvgmarks[i] >= 60)
		{
			cout << "Roll no " << i + 1 << " Got D\n";
		}
		else if (StAvgmarks[i] >= 50)
		{
			cout << "Roll no " << i + 1 << " Got E\n";
		}
		else
		{
			cout << "Roll no " << i + 1 << " Got F\n";
		}
	}


}
int main()
{
	input();
	topper();

	return 0;
}