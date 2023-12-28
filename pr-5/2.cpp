#include<iostream>
using namespace std;

class A{
	protected :
		int age;

		string error= "eligible for vote.";
		public :
			A()
			{	
				cout << "enetr your age: ";
				cin >> age;	
				
				try{
					if(age>18){
						throw error;
					}
					else{
						throw true;
					}			
				}catch (bool e){
					cout << endl << "you are not eligible for vote.";
				}catch(string error){
					cout << error << endl;
				}
		}
};
int main(){
	A a1;
	
}
