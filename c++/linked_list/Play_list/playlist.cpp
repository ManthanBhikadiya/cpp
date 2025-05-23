#include <iostream>
#include <string>
using namespace std;

struct Song
{
    string title;
    Song *next;
};

Song *head = nullptr;

// Add song at Beginning

void addsongBeginning(string title)
{
    Song *newSong = new Song{title, nullptr};
    if (!head)
    {
        head = newSong;
        head->next = head;
    }
    else
    {
        Song *temp = head;
        while (temp->next != nullptr && temp->next != head)
        {
            temp = temp->next;
        };
        temp->next = newSong;
        newSong->next = head;
        head = newSong;
    }
    cout << title << " added to Playlist.\n";
}

// Add Song at End

void addSong(string title)
{
    Song *newSong = new Song{title, nullptr};

    if (!head)
    {
        head = newSong;
        head->next = head;
    }
    else
    {
        Song *temp = head;
        while (temp->next != nullptr && temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newSong;
        newSong->next = head;
    }
    cout << title << " added to Playlist.\n";
}

// Display playlist

void Display()
{
    if (!head)
    {
        cout << "Playlist is empty.\n";
        return;
    };

    Song *temp = head;

    int i = 1;

    cout << "\n Playlist:\n";

    do
    {
        cout << i++ << ":" << temp->title << endl;
        temp = temp->next;
    } while (temp != nullptr && temp != head);
}

// main function

int main()
{

    int choice;

    string title;

    do
    {
        cout << "\n Music Playlist Menu:\n";
        cout << "1.Add Song at Beginning\n";
        cout << "2.Add Song at End\n";
        cout << "3.Display Playlist\n";
        cout << "4.Exit\n\n";

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter song title:";
            cin >> title;
            addsongBeginning(title);
            break;
        case 2:
            cout << "Enter song title:";
            cin >> title;
            addSong(title);
            break;
        case 3:
            Display();
            break;
        case 4:
            cout << "Exiting...";
            break;
        default:
            cout << "invalid choice , try again.\n";
        }

    } while (choice != 4);

    return 0;
}