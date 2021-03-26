#include <iostream>
#include "battle_power.cpp"

using namespace std;

int main(){
	int level;
	int base_attack = 23;
	int base_defense = 30;
	cout<<"Level Anda : ";cin>>level;
	cout<<"ATK        : "<<attack(level,base_attack)<<endl;
	cout<<"DEF        : "<<defense(level,base_defense)<<endl;
}
