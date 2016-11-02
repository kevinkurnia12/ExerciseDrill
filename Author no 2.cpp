#include <iostream>

using namespace std;

class Author {
	private :
		string name;
		string email;
		char gender;
	public :
		Author(){
		}
		Author (string name, string email, char gender){
			this->name = name;
			this->email = email;
			this->gender = gender;
		}
		string getName(){
   			return name;
		}
		string getEmail(){
			return email;
		}
		char getGender(){
			return gender;
		}
		void setEmail(string email) {
			this->email = email;
		}
		string toString(){
			string a;
			a = "Author[Name = " + name + ", Email = " + email + ", Gender = " + gender + "]";
			return a;
		}
};

class Book {
	private :
		string name;
		Author author;
		double price;
		int qty;
	public :
		Book(string name, Author author, double price) {
			this->name = name;
			this->author = author;
			this->price = price;
		}
		Book(string name, Author author, double price, int qty){
			this->name = name;
			this->author = author;
			this->price = price;
			this->qty = qty;
		}
		string getName() {
			return name;
		}
		Author getAuthor(){
			return author;
		}
		double getPrice(){
			return price;
		}
		void setPrice(double price){
			this->price = price;
		}
		int getQty() {
			return qty;
		}
		void setQty(int qty){
			this->qty = qty;
		}
		string toString(){
			string b;
			b = "Book [Name = " + name + ", " + author.toString() + ", Price = " + to_string(price) + ", Qty = " + to_string(qty) + "]";
			return b;
		}
};

int main(){
	Author author("Babelac", "kk_1998_kk@yahoo.com", 'M');
	
	cout << "Name : " << author.getName() << endl;
	cout << "Email : " << author.getEmail() << endl;
	cout << "Gender : ";
	
	if (author.getGender() == 'M' || author.getGender() == 'm') {
		cout << "Male";
	}
	else if (author.getGender() == 'F' || author.getGender() == 'f'){
		cout << "Female";
	}
	
	cout << author.toString();
	
	Book book ("Harry Potter", author, 20.5, 200);
	
	cout << endl << endl << book.toString();
	
	return 0;
} 
