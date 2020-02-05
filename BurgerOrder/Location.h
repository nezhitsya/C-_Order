#ifndef Location_H
#define Location_H
#include<iostream>
#include "Delivery.h"
using namespace std;

class mokdong {
	char name[10];
	int phone;
	char address[10];
public:
	void NAME(char *);
	void PHONE(int);
	void ADDRESS(char *);
	void show();
	static int liner;
	static void buyburger(int n) { liner -= n; }
};
class ohmokgyo {
	char name[10];
	int phone;
	char address[10];
public:
	void NAME(char *);
	void PHONE(int);
	void ADDRESS(char *);
	void show();
	static int liner;
	static void buyburger(int n) { liner -= n; }
};

class yeongpo {
	char name[10];
	int phone;
	char address[10];
public:
	void NAME(char *);
	void PHONE(int);
	void ADDRESS(char *);
	void show();
	static int liner;
	static void buyburger(int n) { liner -= n; }
};
#endif