#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct BookInfo{
    string title;
    string author;
};
class Book {
  private:
  vector <BookInfo> BookList;
public:
    void addbook();
    void displaybooks();
    void pickbook();
    void returnbook();
    void totalbooks();
};
void Book::addbook() {
    cin.ignore();
    BookInfo newBook;
    cout << "Enter Title of Book: ";
    getline(cin, newBook.title);
    cout << "Enter Author of Book: ";
    getline(cin, newBook.author);
    BookList.push_back(newBook);
    cout << "Book added successfully!\n";
}

void Book::displaybooks() {
    if (BookList.empty()) {
        cout << "\nNo books available in the library.\n";
        return;
    }

    cout << "\n--- List of Books ---\n";
    for (size_t i = 0; i < BookList.size(); ++i) {
        cout << i + 1 << ". Title: " << BookList[i].title
             << " | Author: " << BookList[i].author << endl;
    }
}

void Book::pickbook() {
    cout << "You picked a book!" << endl;
}

void Book::returnbook() {
    cout << "Book returned successfully!" << endl;
}

void Book::totalbooks() {
    cout << "Total books are being counted..." << endl;
}
int main() {
    Book library;
    Book Bookdetails;
    int choice,booklistn=0;

    do {
        cout << "\nWelcome!\n"
             << "1. Add Book\n"
             << "2. Display Books\n"
             << "3. Pick Book\n"
             << "4. Return Book\n"
             << "5. Total Books\n"
             << "6. Exit\n"
             << "Select: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addbook();
                break;
            case 2:
                library.displaybooks();
                break;
            case 3:
                library.pickbook();
                break;
            case 4:
                library.returnbook();
                break;
            case 5:
                library.totalbooks();
                break;
            case 6:
                cout << "Exiting... Goodbye!" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while (choice != 6);
    return 0;
}
