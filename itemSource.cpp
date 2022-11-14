#include <iostream>
#include "ItemHead.h"
using namespace std;

/*
 * ItemSource.cpp
 *
 *  Created on: Nov 13, 2022
 *      Author: ellio
 */

// ITEM HEADER ///////////////////////////////////////////////////////////

Item::Item(string color, double length, string description) {
	this->color = color;
	this->length = length;
	this->description = description;
}
void Item::setColor(string color) {
	this->color = color;
}
void Item::setLength(double length) {
	this->length = length;
}
void Item::setDescription(string description) {
	this->description = description;
}
string Item::getColor() {
	return color;
}
double Item::getLength() {
	return length;
}
string Item::getDescription() {
	return description;
}
void Item::printItem() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description << endl;
}

// SHELL HEADER ///////////////////////////////////////////////////////////

Shell::Shell(string color, double length, string description) {
	this->color = color;
	this->length = length;
	this->description = description;
}
void Shell::printShell() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description << endl;
}

// PLANT HEADER ///////////////////////////////////////////////////////////

Plant::Plant(string color, double length, string description, double height) {
	this->color = color;
	this->length = length;
	this->description = description;
	this->height = height;
}
void Plant::setHeight(double height) {
	this->height = height;
}
double Plant::getHeight() {
	return height;
}
void Plant::printPlant() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description;
	cout << "\nHeight: " << height << endl;
}

// WOOD HEADER ///////////////////////////////////////////////////////////

Wood::Wood(string color, double length, string description, string hue) {
	this->color = color;
	this->length = length;
	this->description = description;
	this->hue = hue;
}
void Wood::setHue(string hue) {
	this->hue = hue;
}
string Wood::getHue() {
	return hue;
}
void Wood::printWood() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description;
	cout << "\nHue: " << hue << endl;
}

// GLASS HEADER //////////////////////////////////////////////////////////

Glass::Glass(string color, double length, string description, string origin) {
	this->color = color;
	this->length = length;
	this->description = description;
	this->origin = origin;
}
void Glass::setOrigin(string origin) {
	this->origin = origin;
}
string Glass::getOrigin() {
	return origin;
}
void Glass::printGlass() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description;
	cout << "\nOrigin: " << origin << endl;
}
