#include <iostream>
#include <conio.h>

using namespace std;

struct book 
{
	string title;
	string author;
	int yearPublished = 0;
	int numPages = 0;
};

int main()
{
	const int NUM_BOOK = 4;
	book books[NUM_BOOK] =
	{
		{"The Great Gatsby", "F. Scott Fitzgerlald", 1925, 180},
		{"To Kill a Mockingbird", "Unkown", 2021, 1},
		{"1984", "George Orwell", 1949, 328},
		{"The Catcher in the Rye", "J.D. Salinger", 1951, 277}
	};
		
	for (int i = 0; i < NUM_BOOK; i++)
	{
		cout << (i + 1) << ". " << books[i].title << "\n";
		cout << "Author:" << books[i].author << "\n";
		cout << "Year Published:" << books[i].yearPublished << "\n";
		cout << "Number of Pages:" << books[i].numPages << "\n\n";
	}

	int choice;
	cout << "\nEnter the ID of the book you would like to update (1-4):";
	cin >> choice;

	string newAuthor;
	int newYear;
	int newPages;
	char save;
	cout << choice << ". " << books[choice - 1].title << "\n";
	cout << "Enter the Author (" << books[choice - 1].author << "):";
	cin >> newAuthor;
	cout << "Enter the Year Published (" << books[choice - 1].yearPublished << "):";
	cin >> newYear;
	cout << "Enter the Number of Pages (" << books[choice - 1].numPages << "):";
	cin >> newPages;
	cout << "Save these changes? (Y/N): ";
	cin >> save;
	switch (save)
	{
	case 'Y':
		books[choice - 1].author = newAuthor;
		books[choice - 1].yearPublished = newYear;
		books[choice - 1].numPages = newPages;
		cout << "\n\n" << choice << ". " << books[choice - 1].title << "\n";
		cout << "Author:" << books[choice - 1].author << "\n";
		cout << "Year Published:" << books[choice - 1].yearPublished << "\n";
		cout << "Number of Pages:" << books[choice - 1].numPages << "\n";
		break;
	case 'N':
		cout << "Changes Not Saved";
		break;
	}




	(void)_getch();
	return 0;
}