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

double Payment::Get�nterest() const {
	return �nterest;
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

void Payment::Set�nterest(double value) {
	�nterest = value;
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
	�nterest = z;
	spent = g;
	income = l;
}
void Payment::Read()
{
	double x, y, z, g, l;
	cout << " ������� = "; cin >> surname;
	cout << " ��� = "; cin >> name;
	cout << " �� ������� = "; cin >> middlename;
	cout << " ������ = "; cin >> x;
	cout << " г� ����������� �� ������ = "; cin >> l;
	cout << " ³������ �������� = "; cin >> z;
	cout << " ʳ������ ������������� ��� � ����� = "; cin >> g;
	cout << " ʳ������ ������� ��� � ����� = "; cin >> y;
	Init(x, y, z, g, l);
}
void Payment::Display()
{
	cout << endl;
	cout << " ������� = " << surname << endl;
	cout << " ��� = " << name << endl;
	cout << " �� ������� = " << middlename << endl;
	cout << " ʳ������ ������������� ��� � ����� = " << spent << " ��� " << endl;
	cout << " ʳ������ ������� ��� � ����� = " << experience << " ��� " << endl;
	cout << " ����������� ������� � �������� ���� = 14 % " << endl;
	cout << " ���������� ���������� ���� = " << �nterestt() << endl;
	cout << " ���������� �������� ���� = " << accrued() << endl;
	cout << " ���������� ����, �� �������� �� ���� = " << salary() << endl;
	cout << " ���� = " << incomee() << " ���� " << endl;
}
double Payment::�nterestt()
{
	return (rate / 100 * �nterest) + rate;
}
double Payment::accrued()
{
	return ((�nterestt()) / 100 * 14);
}
double Payment::salary()
{
	return �nterestt() - accrued();
}
double Payment::incomee()
{
	return 2025 - income;
}
