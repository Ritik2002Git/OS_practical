#include<iostream>
using namespace std;
 struct point{
 	int age;
 	string Name;
 };
 
 int main(){
 	
 	struct point P1;
 	P1.age=19;
 	P1.Name="Ritik_kumar";
 	string name="random";
 	cout<<name<<endl;
 	cout<<"\n Name is "<<P1.Name<<"  Age is "<<P1.age;

	struct point* p2;
//	//	p2=(struct point*)malloc(sizeof(struct point)));
	p2->age=10;
	cout<<"\n maldkjak \n ";
	cout<<"kjhkj  "<<p2->age;
 	return 0;
 	
 }
