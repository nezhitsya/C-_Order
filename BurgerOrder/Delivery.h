#ifndef Delivery_H
#define Delivery_H
#include <iostream>
using namespace std;

class Delivery {
protected:
	int number;
	int time;
	char ask[10];
	char company[10];
public:
	void Time(int);
	void Time_check();
	void asktype_name(char *);
	void asktype_name_check();
	void company_name(char *);
	void company_name_check();
	void beforeopen() {
		open();
	}
	virtual void open() {
		cout << "햄버거 배달 소요시간은 최대 1시간입니다." << endl;
	}
};

class FastDelivery :public Delivery {
protected:

public:

	void open() {
		cout << "햄버거 배달 소요시간은 최대 45분입니다." << endl;
	}
};

class SmartDelivery : public FastDelivery {
protected:

public:

	void open() {
		cout << "햄버거 배달 소요시간은 최소 30분입니다." << endl;
	}
};

#endif