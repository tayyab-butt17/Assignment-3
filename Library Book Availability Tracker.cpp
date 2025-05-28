#include<iostream>
using namespace std;
char lib[5][5];
int i, j;
void display()
{
	for (i = 0; i < 5; i++)//shelves
	{
		cout << "Enter Shelve " << i + 1<<endl;
		for (j = 0; j < 5; j++)//books
		{
			cout << "Book " << j + 1 << " Status (A= Available, I= Issued, M= Missing) : ";
			cin >> lib[i][j];
		}
	}

	for (i = 0; i < 5; i++)//shelves
	{
		cout << "Shelve " << i + 1 << endl;
		for (j = 0; j < 5; j++)//books
		{
			cout << "Book " << j + 1 << " is ";
			cout << lib[i][j] << endl;
		}
	}

}
void count()
{
	int avail = 0, iss = 0, mis = 0;
	for (i = 0; i < 5; i++)//shelves
	{
		for (j = 0; j < 5; j++)//books
		{
			if (lib[i][j] == 'a' || lib[i][j] == 'A')
			{
				avail++;
	        }
			else if (lib[i][j] == 'I' || lib[i][j] == 'i')
			{
				iss++;
	        }
			else if (lib[i][j] == 'm' || lib[i][j] == 'M')
			{
				mis++;
	        }
		}
	}

	cout << "Available Books : " << avail << endl;
	cout <<"Issued Books : " << iss << endl;
	cout << "Missing Books : " << mis << endl;
	
}
void highestmis()
{
	int m, hm=0;
	int index=-1;

	for (i = 0; i < 5; i++)//shelves
	{
		m = 0;
		for (j = 0; j < 5; j++)//books
		{
		
			if (lib[i][j] == 'm' || lib[i][j] == 'M')
			{
				m++;
			}
			
		}
		if (m > hm)
		{
			hm = m;
			index = i;
		}
	}
	if (index != -1)
		cout << "Shelf with highest missing books is " << index + 1 << " with " << hm << " missing books\n";
	else
		cout << "No missing books found.\n";

}
int main()
{
	display();
	count();
	highestmis();

	return 0;
}