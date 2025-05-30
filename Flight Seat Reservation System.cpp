#include<iostream>
using namespace std;
char seats[6][4];

void initializeSeats()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            seats[i][j] = 'E';
        }
    }
}


void displaySeats()
{
    cout << "Seating Chart:\n";
    for (int i = 0; i < 6; i++) 
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) 
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void bookSeat() 
{
    int row, col;
    cout << "\nEnter row number (1-6): ";
    cin >> row;
    cout << "Enter seat number (1-4): ";
    cin >> col;

    row--; col--;

    if (row >= 0 && row < 6 && col >= 0 && col < 4) 
    {
        if (seats[row][col] == 'E')
        {
            seats[row][col] = 'B';
            cout << "Seat successfully booked!\n";
        }
        else 
        {
            cout << "Sorry, that seat is already booked.\n";
        }
    }
    else 
    {
        cout << "Invalid seat position.\n";
    }
}


int countAvailableSeats() 
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (seats[i][j] == 'E')
            {
                count++;
            }
                
        }
            
    }
       
    return count;
}


void MaxEmptySeats()
{
    int maxEmpty = -1;

 
    for (int i = 0; i < 6; i++)
    {
        int emptyCount = 0;
        for (int j = 0; j < 4; j++)
        {
            if (seats[i][j] == 'E')
                emptyCount++;
        }

        if (emptyCount > maxEmpty)
            maxEmpty = emptyCount;
    }

  
    if (maxEmpty == 0)
    {
        cout << "No empty seats remaining!" << endl;
        return ;
    }

    
    cout << "Rows with the most empty seats (" << maxEmpty << " empty seats): ";
    for (int i = 0; i < 6; i++)
    {
        int emptyCount = 0;
        for (int j = 0; j < 4; j++)
        {
            if (seats[i][j] == 'E')
                emptyCount++;
        }

        if (emptyCount == maxEmpty)
        {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;
}


int main() 
{
    initializeSeats();

    char choice;
    do 
    {
        displaySeats();
        cout << "\nAvailable Seats: " << countAvailableSeats() << endl;
        MaxEmptySeats();
        bookSeat();

        cout << "\nDo you want to book another seat? (y/n): ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    cout << "\nFinal Seating Chart:\n";
    displaySeats();
   
    cout << "Total Available Seats: " << countAvailableSeats() << endl;

    return 0;
}
