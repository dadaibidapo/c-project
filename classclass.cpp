#include <iostream>
#include <string>

using namespace std;

class Person{
private:
	string name;
	string email;
	int age;
public:
	
	void setName(string n){
		name = n;
	}
	
	string getName(){
		return name;
	}
	
	void setEmail(string e){
		email = e;
	}
	
	string getEmail(){
		return email;
	}
	
	void setAge(int a){
		age = a;
	}
	
	int getAge(){
		return age;
	}
	
	
	void introduce(){
		cout<<"===================================="<<endl;
		cout<<"My name is "<< name<<endl;
		cout<<"Email -- "<< email<<endl;
		cout<<"age --"<< age<<endl;
		cout<<"===================================="<<endl;
	}

	Person(string Name, string Email, int Age){
		name = Name;
		email = Email;
		age = Age;
	}
	
};


int main(){
	
	string name= "dapo";
	string email= "glojpojpoegpojogpo";
	int age = 12;
	Person person1 = Person(name, email, age);
//	person1.name = "Dapo";
//	person1.email = "dman4computer@gmail.com";
//	person1.age = 12;
	person1.introduce();
	
	person1.setAge(32);	
	cout<<person1.getName()<<" is now "<<person1.getAge()<<" "<<"years old"<<endl;
//	cout<<"hhhdh";
	person1.setName("ope");
	cout<<person1.getName()<<" is now "<<person1.getAge()<<" "<<"years old"<<endl;
	
//	
	
//	Person person2;
//	person2.name = "Ade";
//	person2.email = "adeboy@gmail.com";
//	person2.age = 44;
//	person2.introduce();
	
//	Person person3;
//	person3.name
	return 0;
}
