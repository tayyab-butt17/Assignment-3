#include<iostream>
using namespace std;
int teamscore[6][4];
int i, j;
int total[6] = { 0 };

void input()
{
	
	for (i = 0; i < 6; i++)
	{
		total[i] = 0;
		for (j = 0; j < 4; j++)
		{
			cout << "Enter Team " << i+1 << " Score of Competition " << j+1 << " \n";
			cin >> teamscore[i][j];
			total[i] += teamscore[i][j];
		}
	}
}

void lessthen10()
{

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (teamscore[i][j] <= 10)
			{
				cout << "Team " << i + 1 << " scored " << teamscore[i][j] << " in round " << j + 1 << endl;
			}
		}
	}

}

void winner()
{
	int winner = -1, runner = -1;
	int index = -1, index2 = -1;
	for (i = 0; i < 6; i++) 
	{
		if (total[i] > winner) 
		{
			runner = winner;
			index2 = index;
			winner = total[i];
			index = i;
		}
		else if (total[i] > runner && total[i] < winner) 
		{
			runner = total[i];
			index2 = i;
		}
	}


	cout << "Winner: Team " << index + 1 << " with total score: " << winner << endl;
	cout << "Runner-up: Team " << index2 + 1 << " with total score: " << runner << endl;

}


int main()
{
	input();
	cout << "\nTotal Scores of All Teams:\n";
	for (i = 0; i < 6; i++)
	{
		cout << "Team " << i + 1 << " total score: " << total[i] << endl;
	}
	winner();
	lessthen10();


	return 0;

}