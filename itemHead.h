#include <iostream>
using namespace std;

/*
 * ItemHead.h
 *
 *  Created on: Nov 13, 2022
 *      Author: ellio
 */

#ifndef ITEMHEAD_H_
#define ITEMHEAD_H_

class Item {
protected:
	string color;
	double length;
	string description;
public:
	void setColor(string);
	void setLength(double);
	void setDescription(string);
	string getColor();
	double getLength();
	string getDescription();
	Item(string, double, string);
	void printItem();
};

class Shell : public Item {
public:
	void printShell();
	Shell(string, double, string);
};

class Plant : public Item {
protected:
	double height;
public:
	void setHeight(double);
	double getHeight();
	void printPlant();
	Plant(string, double, string, double);
};

class Wood : public Item {
protected:
	string hue;
public:
	void setHue(string);
	string getHue();
	void printWood();
	Wood(string, double, string, string);
};

class Glass : public Item {
protected:
	string origin;
public:
	void setOrigin(string);
	string getOrigin();
	void printGlass();
	Glass(string, double, string, string);
};

#endif /* ITEMHEAD_H_ */
