#include <iostream>
using namespace std;
#include "Delivery.h"


void Delivery::Time(int time = 2) {
	this->time = time;
}
void Delivery::Time_check() {
	cout << "할부 기간은 " << this->time << "입니다" << endl;
}

void Delivery::asktype_name(char *ask) {
	strcpy_s(this->ask, ask);
}
void Delivery::asktype_name_check() {
	cout << "요구 사항은 " << this->ask << " 입니다" << endl;
}
void Delivery::company_name(char *com) {
	strcpy_s(company, com);
}
void Delivery::company_name_check() {
	cout << "고객님의 포인트 적립 회사는 " << this->company << "입니다" << endl;
}
