#include <iostream>
using namespace std;
#include "Delivery.h"


void Delivery::Time(int time = 2) {
	this->time = time;
}
void Delivery::Time_check() {
	cout << "�Һ� �Ⱓ�� " << this->time << "�Դϴ�" << endl;
}

void Delivery::asktype_name(char *ask) {
	strcpy_s(this->ask, ask);
}
void Delivery::asktype_name_check() {
	cout << "�䱸 ������ " << this->ask << " �Դϴ�" << endl;
}
void Delivery::company_name(char *com) {
	strcpy_s(company, com);
}
void Delivery::company_name_check() {
	cout << "������ ����Ʈ ���� ȸ��� " << this->company << "�Դϴ�" << endl;
}
