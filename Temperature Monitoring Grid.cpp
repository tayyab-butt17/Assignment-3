#include<iostream>
using namespace std;
float temp[5][5];
int i, j;
float average[5];
void input()
{
	
	for (i = 0; i < 5; i++)//loc
	{
		int sum = 0;
		for (j = 0; j < 5; j++)//temp
		{
			temp[i][j] = 30 + rand() % 10;
			sum += temp[i][j];
		}
		average[i] = sum / 5.0;
	}

}
void avg()
{
	for (i = 0; i < 5; i++)
	{
		cout <<"Average temperature of zone "<<i+1<<" is " <<average[i] << endl;
	}
	float max = temp[0][0];
	float min = temp[0][0];
	int maxRow = 0, maxCol = 0;
	int minRow = 0, minCol = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (temp[i][j] > max)
			{
				max = temp[i][j];
				maxRow = i;
				maxCol = j;
			}
			if (temp[i][j] < min)
			{
				min = temp[i][j];
				minRow = i;
				minCol = j;
			}
		}
	}
	cout << "Hottest temperature: " << max << " at zone " << maxRow + 1 << ", slot " << maxCol + 1 << endl;
	cout << "Coldest temperature: " << min << " at zone " << minRow + 1 << ", slot " << minCol + 1 << endl;





}
int main()
{
	input();
	avg();


	return 0;
}