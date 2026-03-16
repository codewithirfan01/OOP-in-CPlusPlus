#include<iostream>
using namespace std;
class Gamecharacter{
	private:
		string name;
		int level;
		int health;
	public:
		Gamecharacter(){
			name = "Sara";
			level = 7;
			health = 10;
		}
		
		Gamecharacter(string n, int l, int h){
			name = n;
			level = l;
			health = h;
		}
		
		void display(){
			cout<<"Your Name is: "<<name<<", level: "<<level<<" and health is: "<<health;
		}
		
		~Gamecharacter(){
			cout<<"\n\nObjects are destroyed";
		}		
};

int main(){
	Gamecharacter g1("Irfan",5,10);
	cout<<"Display using static object\n\n";
	g1.display();
	Gamecharacter* g2 = new Gamecharacter();
	cout<<"\n\nDisplay using dynamic object\n\n";
	g2->display();
	
	delete g2;
}
