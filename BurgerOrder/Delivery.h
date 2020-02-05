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
		cout << "�ܹ��� ��� �ҿ�ð��� �ִ� 1�ð��Դϴ�." << endl;
	}
};

class FastDelivery :public Delivery {
protected:

public:

	void open() {
		cout << "�ܹ��� ��� �ҿ�ð��� �ִ� 45���Դϴ�." << endl;
	}
};

class SmartDelivery : public FastDelivery {
protected:

public:

	void open() {
		cout << "�ܹ��� ��� �ҿ�ð��� �ּ� 30���Դϴ�." << endl;
	}
};

#endif