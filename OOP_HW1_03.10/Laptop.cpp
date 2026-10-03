#include "Laptop.h"



Laptop::Laptop(string md, double pr, string cpu, string ssd, string ram, Mouse* ms, Web* wb):model(md), price(pr), CPU(cpu), SSD(ssd), RAM(ram), mouse (ms), web(wb){}

void Laptop::Print()
{
	cout << "\n\tModel: " << model
		<< "\n\tPrice: " << price
		<< "\n\tCPU: " << CPU
		<< "\n\tSSD: " << SSD
		<< "\n\tRAM: " << RAM;
	mouse->Print();
	web->Print();
	
}

void Laptop::SetMouse(Mouse* ms)
{
	mouse = ms;
}

void Laptop::SetWeb(Web* wb)
{
	web = wb;
}


Mouse::Mouse(string nm)
{
	name = nm;
}

void Mouse::Print()
{
	cout << "\n\tMouse: " << name;
}

Web::Web(string wb)
{
	name = wb;
}

void Web::Print()
{

	cout << "\n\tWeb: " << name;
}
