#include <iostream>
#include <string>

using namespace std;

class Person{
private:
	string name;
	string email;
	int age;
public:
	string getName(){
		return name;
	}
	void setAge(int x){
		age = x;
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
	
//	~Person(){
//		cout<<endl<<"Person destroyed";
//	}
	
	friend void fun(Person &);
	
};

void fun(Person &obj){
	cout<<obj.name<<endl;
	cout<<obj.age<<endl;
	obj.age=20;
	cout<<obj.age<<endl;
}
int main(){
	
	string name= "dapo";
	string email= "glojpojpoegpojogpo";
	int age = 12;
	Person person1 = Person(name, email, age);
//	person1.name = "Dapo";
//	person1.email = "dman4computer@gmail.com";
//	person1.age = 12;
//	person1.introduce();
	fun(person1);
//	person1.setAge(90);
//	cout<<person1.getName()<<" is "<<person1.getAge()<<"years old now";
	
//	Person person2;
//	person2.name = "Ade";
//	person2.email = "adeboy@gmail.com";
//	person2.age = 44;
//	person2.introduce();
	
//	Person person3;
//	person3.name
	return 0;
}
