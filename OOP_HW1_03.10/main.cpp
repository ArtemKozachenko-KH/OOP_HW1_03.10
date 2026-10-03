#include <iostream>
#include "Laptop.h"
using namespace std;


int main()
{
	Mouse mouse("Logitech");
	Web web("Fifine");

	Laptop* ptr = new Laptop("Lenovo",30000,"Intel","SSD","RAM",&mouse, &web);

	ptr->Print();
	delete ptr;
	cout<<"\n\t|----------|";
	Mouse mouse2("Bloody");
	Web web2("TechWeb");

	Laptop obj ("MacOs", 40000, "AMD", "SSD", "RAM", &mouse, &web);
	obj.SetMouse(&mouse2);
	obj.SetWeb(&web2);
	obj.Print();
}