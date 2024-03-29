#pragma once
class Payment
{
private:
    double rate, experience, łnterest, spent, income;
    std::string surname, name, middlename;

public:
    Payment();
    

    double Getrate() const;
    double Getexperience() const;
    double Getłnterest() const;
    double Getspent() const;
    double Getincome() const;
    std::string Getsurname() const;
    std::string Getname() const;
    std::string Getmiddlename() const;

    void Setrate(double value);
    void Setexperience(double value);
    void Setłnterest(double value);
    void Setspent(double value);
    void Setincome(double value);
    void Setsurname(const std::string& value);
    void Setname(const std::string& value);
    void Setmiddlename(const std::string& value);
	void Init(double, double, double, double, double);
	void Read();
	void Display();
	double accrued();
	double łnterestt();
	double incomee();
	double salary();

};
