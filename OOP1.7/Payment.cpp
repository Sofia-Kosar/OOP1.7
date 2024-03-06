#include "Payment.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;
Payment::Payment() {}

double Payment::Getrate() const {
	return rate;
}

double Payment::Getexperience() const {
	return experience;
}

double Payment::Get³nterest() const {
	return ³nterest;
}

double Payment::Getspent() const {
	return spent;
}

double Payment::Getincome() const {
	return income;
}
std::string Payment::Getsurname() const {
	return surname;
}

std::string Payment::Getname() const {
	return name;
}

std::string Payment::Getmiddlename() const {
	return middlename;
}

void Payment::Setsurname(const std::string& surname) {
	this->surname = surname;
}

void Payment::Setname(const std::string& name) {
	this->name = name;
}

void Payment::Setmiddlename(const std::string& middlename) {
	this->middlename = middlename;
}

void Payment::Setrate(double value) {
	rate = value;
}

void Payment::Setexperience(double value) {
	experience = value;
}

void Payment::Set³nterest(double value) {
	³nterest = value;
}

void Payment::Setspent(double value) {
	spent = value;
}

void Payment::Setincome(double value) {
	income = value;
}


void Payment::Init(double x, double y, double z, double g, double l)
{
	rate = x;
	experience = y;
	³nterest = z;
	spent = g;
	income = l;
}
void Payment::Read()
{
	double x, y, z, g, l;
	cout << " Ïð³çâèùå = "; cin >> surname;
	cout << " ²ì’ÿ = "; cin >> name;
	cout << " Ïî áàòüêîâ³ = "; cin >> middlename;
	cout << " Ñòàâêà = "; cin >> x;
	cout << " Ð³ê ïîñòóïëåííÿ íà ðîáîòó = "; cin >> l;
	cout << " Â³äñîòîê íàäáàâêè = "; cin >> z;
	cout << " Ê³ëüê³ñòü â³äïðàöüîâàíèõ äí³â â ì³ñÿö³ = "; cin >> g;
	cout << " Ê³ëüê³ñòü ðîáî÷èõ äí³â â ì³ñÿö³ = "; cin >> y;
	Init(x, y, z, g, l);
}
void Payment::Display()
{
	cout << endl;
	cout << " Ïð³çâèùå = " << surname << endl;
	cout << " ²ì’ÿ = " << name << endl;
	cout << " Ïî áàòüêîâ³ = " << middlename << endl;
	cout << " Ê³ëüê³ñòü â³äïðàöüîâàíèõ äí³â â ì³ñÿö³ = " << spent << " äí³â " << endl;
	cout << " Ê³ëüê³ñòü ðîáî÷èõ äí³â â ì³ñÿö³ = " << experience << " äí³â " << endl;
	cout << " Ïðèáóòêîâèé ïîäàòîê ³ ïåíñ³éíèé ôîíä = 14 % " << endl;
	cout << " Îá÷èñëåííÿ íàðàõîâàíî¿ ñóìè = " << ³nterestt() << endl;
	cout << " Îá÷èñëåííÿ óòðèìàíî¿ ñóìè = " << accrued() << endl;
	cout << " Îá÷èñëåííÿ ñóìè, ùî âèäàºòüñÿ íà ðóêè = " << salary() << endl;
	cout << " Ñòàæ = " << incomee() << " ðîê³â " << endl;
}
double Payment::³nterestt()
{
	return (rate / 100 * ³nterest) + rate;
}
double Payment::accrued()
{
	return ((³nterestt()) / 100 * 14);
}
double Payment::salary()
{
	return ³nterestt() - accrued();
}
double Payment::incomee()
{
	return 2025 - income;
}
