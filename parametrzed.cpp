
#include <iostream>
#include <string>
using namespace std;
class books
{
private:
    string title;
    float price;
    string author;

public:
    books(string book_title, float book_price, string book_author)
    {
        title = book_title;
        price = book_price;
        author = book_author;
    }
    void display()
    {
        cout << "Book title is :" << title << endl;
        cout << "Book price is :" << price << endl;
        cout << "Book author is :" << author << endl;
    }
};
int main()
{
    string title;
    float price;
    string author;
    cout << "Enter you title:" << endl;
    getline(cin, title);
    cout << "Enter book's author:" << endl;
    getline(cin, author);
    cout << "ENter the price of book:" << endl;
    cin >> price;
    books obj(title, price, author);
    obj.display();
    return 0;
}
