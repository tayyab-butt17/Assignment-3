#include<iostream>
using namespace std;
char record[5][7];
int p, d;
void input()
{
	int s = 0, c = 0, r = 0;
	int criticaldays[5] = { 0 };
	for (p = 0; p < 5; p++)
	{
		for (d = 0; d < 7; d++)
		{
			
			cout << "Enter Patient " << p + 1 << " Condition on day "<< d + 1<<" [ S=Stable, C=Critical, and R=Recovered ] : " ;
			cin >> record[p][d];
			if (record[p][d] == 'S' || record[p][d] == 's')
			{
				s++;
			}
			else if (record[p][d] == 'C' || record[p][d] == 'c')
			{
				c++;
				criticaldays[p]++;
			}
			else if (record[p][d] == 'R' || record[p][d] == 'r')
			{
				r++;
			}  



		}
		cout << "\n\n";
	
	}
	cout << "Stable Patients " << s << endl;
	cout << "Critical Patients " << c << endl;
	cout << "Recovered Patients " << r << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Patient " << i + 1 << " was critical for " << criticaldays[i] << "days\n";
	}


}


int main()
{

	input();


	return 0;
}