#include<iostream>
using namespace std;

class alpha{
	public:
		virtual void greet(){
			cout<<"\nGreetings from ALPHA class" <<endl;
		}
		// virtual void greet(){
		// 	cout<<"\nGreetings from ALPHA class." <<endl;
		// };
		void show(){
			cout<<"\nshow() function of ALPHA class" <<endl;
		}
};	

class beta: public alpha{
	public:
		void greet(){
			cout<<"\nGreetings from BETA class" <<endl;
		}
		void show(){
			cout<<"\nshow() function of BETA class" <<endl;
		}
};

class gamma: public beta{
	public:
		void greet(){
			cout<<"\nGreetings from GAMMA class" <<endl;
		}
};

int main(){
	
	alpha *ptr=new beta;
	ptr->greet();
	ptr->show();

	// delete ptr;
	// ptr=new alpha;
	// ptr->greet();

	alpha obj;		//	--> we can't instantiate an object of Abstract class
	obj.greet();
	obj.show();
	//	an ABSTRACT class is the class, which has atleast one Virtual function


	return 0;
}