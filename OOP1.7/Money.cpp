#include "Money.h"
#include <iostream>
#include <cmath>

using namespace std;

Money::Money() : UAH(0), UAH2(0), lungs(0), multiplicationn(0), kopec(0), kopec1(0), lungs1(0), multiplicationn1(0) {}

Money::Money(long uah, long uah2, long l, long mult, unsigned char k, unsigned char k1, unsigned char l1, unsigned char mult1) :
	UAH(uah), UAH2(uah2), lungs(l), multiplicationn(mult), kopec(k), kopec1(k1), lungs1(l1), multiplicationn1(mult1) {}

long Money::GetUAH() const {
	return UAH;
}

long Money::GetUAH2() const {
	return UAH2;
}

long Money::Getlungs() const {
	return lungs;
}

long Money::Getmultiplicationn() const {
	return multiplicationn;
}

unsigned char Money::Getkopec() const {
	return kopec;
}

unsigned char Money::Getkopec1() const {
	return kopec1;
}

unsigned char Money::Getlungs1() const {
	return lungs1;
}

unsigned char Money::Getmultiplicationn1() const {
	return multiplicationn1;
}

void Money::SetUAH(long value) {
	UAH = value;
}

void Money::SetUAH2(long value) {
	UAH2 = value;
}

void Money::Setlungs(long value) {
	lungs = value;
}

void Money::Setmultiplicationn(long value) {
	multiplicationn = value;
}

void Money::Setkopec(unsigned char value) {
	kopec = value;
}

void Money::Setkopec1(unsigned char value) {
	kopec1 = value;
}

void Money::Setlungs1(unsigned char value) {
	lungs1 = value;
}

void Money::Setmultiplicationn1(unsigned char value) {
	multiplicationn1 = value;
}

void Money::Init(long x, long y, long m, long k)
{
	UAH = x;
	UAH2 = y;
	lungs = m;
	multiplicationn = k;
}

void Money::Init1(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
	kopec = a;
	kopec1 = b;
	lungs1 = c;
	multiplicationn1 = d;
}

void Money::Read()
{
	long x, y, m, k;
	unsigned char a, b, c, d;
	cout << " Гривні: " << endl;
	cout << " Гривні перша сума більша = "; cin >> x;
	cout << " Гривні друга сума менша = "; cin >> y;
	cout << " Дробове число гривнів = "; cin >> m;
	cout << " Число для множення гривнів = "; cin >> k;
	cout << " Копійки:" << endl;
	cout << " Копійки перша сума більша = "; cin >> a;
	cout << " Копійки друга сума менша = "; cin >> b;
	cout << " Дробове число копійки = "; cin >> c;
	cout << " Число для множення копійки = "; cin >> d;

	Init(x, y, m, k);
	Init1(a, b, c, d);
}

long Money::addition()
{
	return UAH + UAH2;
}

long Money::subtraction()
{
	return UAH - UAH2;
}

long Money::divisionofsums()
{
	return addition() / subtraction();
}

long Money::lungss()
{
	return sqrt(lungs) / divisionofsums();
}

long Money::multiplication()
{
	return sqrt(lungs) * multiplicationn;
}

void Money::Display()
{
	cout << endl;
	cout << " Додавання гривнів = " << addition() << endl;
	cout << " Віднімання гривнів = " << subtraction() << endl;
	cout << " Ділення сум гривнів = " << divisionofsums() << endl;
	cout << " Ділення сум на дробове число для гривнів = " << lungss() << endl;
	cout << " Mноження на дробове число для гривнів = " << multiplication() << endl;
	cout << " Додавання копійок = " << addition1() << endl;
	cout << " Віднімання копійок = " << subtraction1() << endl;
	cout << " Ділення сум копійок = " << divisionofsums3() << endl;
	cout << " Ділення сум на дробове число для копійок = " << lungss3() << endl;
	cout << " Mноження на дробове число для копійок = " << multiplication3() << endl;
}

double Money::addition1()
{
	return (kopec * 0.01) + (kopec1 * 0.01);
}

double Money::subtraction1()
{
	return (kopec * 0.01) - (kopec1 * 0.01);
}

double Money::divisionofsums3()
{
	return addition1() / subtraction1();
}

double Money::lungss3()
{
	return sqrt((lungs1) * 0.01) / divisionofsums3();
}

double Money::multiplication3()
{
	return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);
}

void Money::Comparison()
{
	if (multiplication() == multiplication3())
		cout << multiplication() << "  дорівнює  " << multiplication3() << " \n ";
	if (multiplication() > multiplication3())
		cout << multiplication() << "  більше  " << multiplication3() << " \n ";
	if (multiplication() < multiplication3())
		cout << multiplication() << "  менше   " << multiplication3() << " \n ";
}
