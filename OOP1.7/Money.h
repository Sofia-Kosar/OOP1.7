#pragma once
#ifndef MONEY_H
#define MONEY_H

class Money {
	long UAH, UAH2, lungs, multiplicationn;
	unsigned char kopec, kopec1, lungs1, multiplicationn1;

public:
	Money(); // конструктор за замовчуванням
	Money(long uah, long uah2, long l, long mult, unsigned char k, unsigned char k1, unsigned char l1, unsigned char mult1); // конструктор з параметрами

	long GetUAH() const;
	long GetUAH2() const;
	long Getlungs() const;
	long Getmultiplicationn() const;
	unsigned char Getkopec() const;
	unsigned char Getkopec1() const;
	unsigned char Getlungs1() const;
	unsigned char Getmultiplicationn1() const;

	void SetUAH(long value);
	void SetUAH2(long value);
	void Setlungs(long value);
	void Setmultiplicationn(long value);
	void Setkopec(unsigned char value);
	void Setkopec1(unsigned char value);
	void Setlungs1(unsigned char value);
	void Setmultiplicationn1(unsigned char value);
	void Init(long, long, long, long);
	void Init1(unsigned char, unsigned char, unsigned char, unsigned char);
	void Read();
	void Display();
	long addition();
	long subtraction();
	long divisionofsums();
	long lungss();
	long multiplication();
	double addition1();
	double subtraction1();
	double divisionofsums3();
	double lungss3();
	double multiplication3();
	void Comparison();
};

#endif // MONEY_H
