#include <iostream>
#include <string>

using namespace std;

class Author {
	private :
		string name;
		string email;
		char gender;
	public :
		Author (string name, string email, char gender){
			this->name = name;
			this->email = email;
			this->gender = gender;
		}
		string getName() const {
   			return name;
		}
		string getEmail() const {
			return email;
		}
		char getGender() const {
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
	
	cout << endl << author.toString();
	
	
} 
