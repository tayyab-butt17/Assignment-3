#include<iostream>
using namespace std;
int readings[5][10];
int i, j;
void userratings()
{
	int sum ;
	float average;
	int user;
	float lowestAverage = 6.0; 
	int worstProduct = -1;
	for (i = 0; i < 5; i++)
	{
		average = 0.0;
		sum = 0;
		user = 0;
		cout << "Enter product " << i + 1 << " rating (1 to 5) of \n";
		for (j = 0; j < 10; j++)
		{
			cout <<"User " <<j + 1<<" ";
			cin >> readings[i][j];
			if (readings[i][j] == 5)
			{
				user++;
			}
			sum += readings[i][j];
		}
		average = sum / 10.0;
		cout << "Average Rating of Product " << i + 1 << " is " << average << endl;
		cout << "Users who gave 5 rating: " << user << endl;

		if (average < lowestAverage)
		{
			lowestAverage = average;
			worstProduct = i;
		}
	}

	cout << "\nProduct with the worst average rating is Product " << worstProduct + 1
		<< " with average score: " << lowestAverage << endl;
}

int main()
{

	userratings();
	return 0;
}