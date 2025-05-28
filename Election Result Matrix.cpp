#include<iostream>
using namespace std;
int votes[4][6];
int i, j;
void input()
{
	for (i = 0; i < 4; i++)
	{
		cout << "Enter Vote for Candidate " << i + 1 <<" of" << endl;
		for (j = 0; j < 6; j++)
		{
			cout << "Polling Station No. " << j + 1 << " ";
			cin >> votes[i][j];
		}
	}
}
void calvotes()
{
	int sum ;
	cout << "Total Votes Per Candidate " << endl;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 6; j++)
		{
			sum+=votes[i][j];
		}
		cout << "Votes of Candidate" << i + 1 << " are " << sum << endl;
	}	
	
	cout << "Total Votes Per Polling Station " << endl;
	for (j = 0; j < 6; j++)
	{
		sum = 0;
		for (i = 0; i < 4; i++)
		{
			sum+=votes[i][j];
		}
		cout << "Polling Station " << j + 1 << ": " << sum << " votes ";

		if (sum < 100)
			cout << " Turnout less than 100!";
		cout << endl;
	}

}
void winner()
{
	int win[4];
	int maxVotes = 0;

	for (i = 0; i < 4; i++)
	{
		win[i] = 0;
		for (j = 0; j < 6; j++)
		{
			win[i] += votes[i][j];
		}
		if (win[i] > maxVotes)
			maxVotes = win[i];
	}

	cout << "\nWinner(s):\n";
	for (i = 0; i < 4; i++)
	{
		if (win[i] == maxVotes)
		{
			cout << "Candidate " << i + 1 << " with " << win[i] << " votes\n";
		}
	}
	



}
int main()
{
	input();
	calvotes();
	winner();



	return 0;
}