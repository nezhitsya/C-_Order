#include<iostream>
using namespace std;
#include "Location.h"

void mokdong::NAME(char *name) {
	strcpy_s(this->name, name);
}
void mokdong::PHONE(int phone) {
	this->phone = phone;

}
void mokdong::ADDRESS(char *address) {
	strcpy_s(this->address, address);
}
void mokdong::show() {
	cout << "�̸��� �� " << this->name << endl;
	cout << "��ȭ��ȣ�� �� " << this->phone << endl;
	cout << "�ּҴ� �� " << this->address << endl << endl;
}
void ohmokgyo::NAME(char *name) {
	strcpy_s(this->name, name);
}
void ohmokgyo::PHONE(int phone) {
	this->phone = phone;

}
void ohmokgyo::ADDRESS(char *address) {
	strcpy_s(this->address, address);
}
void ohmokgyo::show() {
	cout << "�̸��� �� " << this->name << endl;
	cout << "��ȭ��ȣ�� �� " << this->phone << endl;
	cout << "�ּҴ� �� " << this->address << endl << endl;
}
void yeongpo::NAME(char *name) {
	strcpy_s(this->name, name);
}
void yeongpo::PHONE(int phone) {
	this->phone = phone;

}
void yeongpo::ADDRESS(char *address) {
	strcpy_s(this->address, address);
}
void yeongpo::show() {
	cout << "�̸��� �� " << this->name << endl;
	cout << "��ȭ��ȣ�� �� " << this->phone << endl;
	cout << "�ּҴ� �� " << this->address << endl << endl;
}
int mokdong::liner = 10;
int ohmokgyo::liner = 10;
int yeongpo::liner = 10;