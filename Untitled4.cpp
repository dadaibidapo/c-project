#include <iostream>
#include <string>

using namespace std;

class person{
public:
	string name;
	string company;
	int age;
void introduce(){
	cout<<"my name is "<<name<<endl;
	cout<<"i work for "<<company<<endl;
	cout<<"i am "<<age<<" years old"<<endl;
}
};
int main(){
	person person1;
//	person1.name = "dapo";
//	person1.company = "google";
//	person1.age = 33;
	person1.introduce();
	return 0;
}

