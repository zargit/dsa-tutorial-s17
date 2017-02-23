#include <iostream>

using namespace std;

class Student{
	public:
		string name;
		int year;
		int matric;
		Student(){
			name = "";
			year = 0;
			matric = 0;
		}

		Student(string _name, int _year, int _matric){
			name = _name;
			year = _year;
			matric = _matric;
		}
};

void display(Student student){
	cout<<endl;
	cout<<"Name: "<<student.name<<endl;
	cout<<"Year: "<<student.year<<endl;
	cout<<"Matric: "<<student.matric<<endl;
	cout<<endl;
}

int main(){
	Student student1,student2("Ahmad",3,1212123);
	display(student1);
	display(student2);
}