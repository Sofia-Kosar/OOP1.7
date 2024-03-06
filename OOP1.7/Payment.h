#pragma once
class Payment
{
private:
    double rate, experience, �nterest, spent, income;
    std::string surname, name, middlename;

public:
    Payment();
    

    double Getrate() const;
    double Getexperience() const;
    double Get�nterest() const;
    double Getspent() const;
    double Getincome() const;
    std::string Getsurname() const;
    std::string Getname() const;
    std::string Getmiddlename() const;

    void Setrate(double value);
    void Setexperience(double value);
    void Set�nterest(double value);
    void Setspent(double value);
    void Setincome(double value);
    void Setsurname(const std::string& value);
    void Setname(const std::string& value);
    void Setmiddlename(const std::string& value);
	void Init(double, double, double, double, double);
	void Read();
	void Display();
	double accrued();
	double �nterestt();
	double incomee();
	double salary();

};
