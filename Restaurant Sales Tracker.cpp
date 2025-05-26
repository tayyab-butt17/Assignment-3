#include<iostream>
using namespace std;
float sales[7][4];
int i, j;
void input()
{
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "Enter data of Day " << i + 1 << " of Item " << j + 1 << " ";
			cin >> sales[i][j];
		}
	}

}
void totalsalesperitem()
{
	for (j = 0; j < 4; j++)//item
	{
		float sum = 0.0;
		for (i = 0; i < 7; i++)//day
		{
			
			sum+= sales[i][j];
		}
		cout << "Tota sales of item : " << j + 1 << " is " << sum << endl;
	}
}
void totalsalesperday()
{
	float maxsale = 0.0;
	int maxday = 0;

	for (i = 0; i < 7; i++)//day
	{
		float sum = 0.0;
		for (j = 0; j < 4; j++)//item
		{

			sum += sales[i][j];
		}
		if (sum > maxsale)
		{
			maxsale = sum;
			maxday = i;
		}
		cout << "Tota sales on day : " << i + 1 << " is " << sum << endl;
	}
	cout << "Highest sale on day " << maxday << " With ammount " << maxsale;
}
int main()
{
	input();
	totalsalesperitem();
	totalsalesperday();

	return 0;
}