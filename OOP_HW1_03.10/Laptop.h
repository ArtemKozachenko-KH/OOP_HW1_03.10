#pragma once
#include <iostream>
using namespace std;


class Mouse
{
	string name;
public:
	Mouse(string nm);
	void Print();
};

class Web
{
	string name;
public:
	Web(string wb);
	void Print();
};

class Laptop
{
	string model;
	double price;
	string CPU;
	string SSD;
	string RAM;
	Mouse* mouse;
	Web* web;
public:
	Laptop(string md, double pr, string cpu, string ssd, string ram, Mouse* ms,Web* wb);
	void Print();
	void SetMouse(Mouse* ms);
	void SetWeb(Web *wb);

};
