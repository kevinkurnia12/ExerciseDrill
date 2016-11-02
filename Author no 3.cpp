#include <iostream>
#include <string>
using namespace std;

class Author
{
	string name;
	string email;
	char gender;
	
	public:
		Author() {
		};
		
		Author(string name, string email, char gender) {
			this -> name = name;
			this -> email = email;
			this -> gender = gender;
		}
		
		string getName() {
			return name;
		}
		
		void setEmail(string email) {
			this -> email = email;
		}
		
		string getEmail() {
			return email;
		}
		
		char getGender() {
			return gender;
		}
		
		string tostring() {			
			string a;
			a = "Author[Name = " + name + ", Email = " + email + ", Gender = " + gender + "]";
			return a;
		}
};

class Book
{
	string bookName;
	Author *author;
	double price;
	int qty = 0;
	
	public:
		Book(string bookName, Author author[], double price) {
			this -> bookName = bookName;
			this -> author = new Author[2];
			for(int i = 0; i < 2; i++)
			{
				this -> author[i] = author[i];
			}
			this -> price = price;
		}
		
		Book(string bookName, Author author[], double price, int qty) {
			this -> bookName = bookName;
			this -> author = new Author[2];
			for(int i = 0; i < 2; i++)
			{
				this -> author[i] = author[i];
			}
			this -> price = price;
			this -> qty = qty;
		}
		
		string getName() {
			return bookName;
		}
		
		Author getAuthor() {
			return *author;
		}
		
		double getPrice() {
			return price;
		}
		
		int getQty() {
			return qty;
		}
		
		string tostring() {
			return "Book[Name=" + bookName + ", " + author[0].tostring() + " and " + author[1].tostring() + ", " + to_string(price) + ", " + to_string(qty) + "\n";
		}
		
		string getAuthorNames() {
			return author[0].getName() + author[1].getName();
		}
};

int main() {
	Author author[2]={Author("Kevin", "kk_1998_kk@yahoo.com", 'M'), Author("Kurnia", "kurnia@yahoo.com", 'M')};
	Book myBook ("HarryPotter", author, 10, 10);	
	
	cout << myBook.tostring() << endl;
	cout << myBook.getAuthorNames() << endl;
	cout << "Gender: ";
 
	if (author.getGender() == 'M' || author.getGender() == 'm') {
  		cout << "Male";
 	}
 
 	else if (author.getGender() == 'F' || author.getGender() == 'f'){
 		cout << "Female";
 	}
	return 0;
}
