#include <iostream>
#include <Windows.h>
#include "Delivery.h"
#include "Location.h"
using namespace std;
int money = 0;
int ��Ƣ = 1, �ݶ� = 2, ġ�ƽ = 3;
void BUY();
void BURGER1();
void BURGER2();
void BURGER3();
void BURGER4();
void BURGER5();
void BURGER6();
void SCREEN();
void CRY();
void SMILE();
void LOADING();
void ��();
void ����();
void ������();
void ��ġ();
void ����();
void ������();
void ��Ƣ1();
void ��Ƣ2();
void �ݶ�1();
void �ݶ�2();
void ġ�ƽ1();
void ġ�ƽ2();
void SIDEBUY();
void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
};
void setcolor(int colornumber)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornumber);
};

void BUY() {
	cout << "�����Ͻ� �ܹ����� ��ȣ�� �Է��� �ּ��� �� ";
	int n;
	cin >> n;
	switch (n) {
	case 1:
		money = +8900;
		system("cls");
		break;
	case 2:
		money = +9300;
		system("cls");
		break;
	case 3:
		money = +8500;
		system("cls");
		break;
	case 4:
		money = +9500;
		system("cls");
		break;
	case 5:
		money = +12500;
		system("cls");
		break;
	case 6:
		money = +8500;
		system("cls");
		break;
	}

	int input;

	setcolor(2);
	Sleep(200); cout << "    ���������������������������      \n";
	Sleep(200); cout << "    ��                                                ��      \n";
	Sleep(200); cout << "    ��                                                ��      \n";
	Sleep(200); cout << "    ��         ��      ���   ���   ���   ���      ��      \n";
	Sleep(200); cout << "    ��       ���     ��  �� ��  �� ��  �� ��  ��     ��      \n";
	Sleep(200); cout << "    ��     ��  ��     ��  �� ��  �� ��  �� ��  ��     ��      \n";
	Sleep(200); cout << "    ��         ��     ��  �� ��  �� ��  �� ��  ��     ��      \n";
	Sleep(200); cout << "    ��         ��     ��  �� ��  �� ��  �� ��  ��     ��      \n";
	Sleep(200); cout << "    ��         ��     ��  �� ��  �� ��  �� ��  ��     ��      \n";
	Sleep(200); cout << "    ��     ������  ���   ���   ���   ���      ��      \n";
	Sleep(200); cout << "    ��                                                ��      \n";
	Sleep(200); cout << "    ��                                                ��      \n";
	Sleep(200); cout << "    ���������������������������      \n\n";
	Sleep(200); cout << "                   $$$ ������Դϴ� $$$   \n";
	Sleep(200); cout << endl;
	Sleep(1000);
	system("cls");
	setcolor(3);
	cout << "              �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�          \n";
	cout << "            ��                                  ��          \n";
	cout << "          ��                                      ��          \n";
	cout << "         ��        ��                   ��          ��          \n";
	cout << "        ��                                           ��        \n";
	cout << "       ��                                            ��          \n";
	cout << "       �ޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡ�          \n";
	cout << "      �ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�          \n";
	cout << "    �ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�          \n";
	cout << "      �ޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡޡ�          \n";
	cout << "      ��                                            ��          \n";
	cout << "       ��                   ��                     ��          \n";
	cout << "       ��                                          ��          \n";
	cout << "       ��     ��                          ��       ��          \n";
	cout << "       ��                                          ��          \n";
	cout << "        ��                                        ��          \n";
	cout << "          �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�          \n";
	cout << "     ���Ű� �Ϸ�Ǿ����ϴ�!    �� ������ �� �̿����ּ��� �� \n";
	cout << endl;
	setcolor(15);
	cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "���Ͻô� �޴��� �Է����ּ��� ��";
		cin >> input;
		if (input == 1)
			��ġ();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			��Ƣ2();
			�ݶ�2();
			ġ�ƽ2();
			SIDEBUY();
		}
	}
}

void ������() {
	setcolor(15);
	cout << "�����Ͻ� �ܹ����� ��ȣ�� �Է��� �ּ��� �� ";
	int n;
	cin >> n;
	switch (n) {
	case 1:
		money = +8900;
		break;
	case 2:
		money = +9300;
		break;
	case 3:
		money = +8500;
		break;
	case 4:
		money = +9500;
		break;
	case 5:
		money = +12500;
		break;
	case 6:
		money = +8500;
		break;
	}
}

void BURGER1() {
	gotoxy(1, 1);
	setcolor(12);
	cout << "     1��     \n";
	cout << "   �Ǧ�������������  \n";
	cout << "   �� ^o^�ܦ�    \n";
	cout << "   ����������������    \n";
	cout << "   ����������������    \n";
	cout << "   ��      ��    \n";
	cout << "   ����������������\n";
	cout << endl;
	gotoxy(3, 8);
	cout << "Cheese Burger" << endl;
	gotoxy(3, 9);
	cout << "$8,900";
}
void BURGER2() {
	gotoxy(18, 1);
	setcolor(13);
	cout << "      2��    \n";
	gotoxy(18, 2);
	cout << "   �Ǧ�������������  \n";
	gotoxy(18, 3);
	cout << "   ���֡Ԣئ�  \n";
	gotoxy(18, 4);
	cout << "   ���������������� \n";
	gotoxy(18, 5);
	cout << "   ����������������  \n";
	gotoxy(18, 6);
	cout << "   ��      �� \n";
	gotoxy(18, 7);
	cout << "   ����������������  \n";
	cout << endl;
	gotoxy(21, 8);
	cout << "Shrimp Burger";
	gotoxy(21, 9);
	cout << "$9,300";
}
void BURGER3() {
	gotoxy(37, 1);
	setcolor(14);
	cout << "     3��    \n";
	gotoxy(37, 2);
	cout << "  �Ǧ������������� \n";
	gotoxy(37, 3);
	cout << "  �� ^��^ ��  \n";
	gotoxy(37, 4);
	cout << "  ����������������  \n";
	gotoxy(37, 5);
	cout << "  ����������������  \n";
	gotoxy(37, 6);
	cout << "  ��      ��  \n";
	gotoxy(37, 7);
	cout << "  ���������������� \n";
	cout << endl;
	gotoxy(39, 8);
	cout << "Chicken Burger";
	gotoxy(39, 9);
	cout << "$8,500";
}
void BURGER4() {
	gotoxy(1, 11);
	setcolor(10);
	cout << "     4��           \n";
	cout << "   �Ǧ�������������  \n";
	cout << "   �� ^��^ ��    \n";
	cout << "   ����������������    \n";
	cout << "   ����������������    \n";
	cout << "   ��      ��    \n";
	cout << "   ����������������\n";
	cout << endl;
	gotoxy(3, 18);
	cout << "Taco Burger";
	gotoxy(3, 19);
	cout << "$9,500";
}
void BURGER5() {
	gotoxy(18, 11);
	setcolor(11);
	cout << "      5��           \n";
	gotoxy(18, 12);
	cout << "   �Ǧ�������������  \n";
	gotoxy(18, 13);
	cout << "   �� ^��^ ��  \n";
	gotoxy(18, 14);
	cout << "   ���������������� \n";
	gotoxy(18, 15);
	cout << "   ����������������  \n";
	gotoxy(18, 16);
	cout << "   ��      �� \n";
	gotoxy(18, 17);
	cout << "   ����������������  \n";
	cout << endl;
	gotoxy(21, 18);
	cout << "Beef Burger";
	gotoxy(21, 19);
	cout << "$12,500";
}
void BURGER6() {
	gotoxy(31, 11);
	setcolor(7);
	cout << "       6��       \n";
	gotoxy(37, 12);
	cout << "  �Ǧ������������� \n";
	gotoxy(37, 13);
	cout << "  ��('_'))��  \n";
	gotoxy(37, 14);
	cout << "  ����������������  \n";
	gotoxy(37, 15);
	cout << "  ����������������  \n";
	gotoxy(37, 16);
	cout << "  ��      ��  \n";
	gotoxy(37, 17);
	cout << "  ���������������� \n";
	cout << endl;
	gotoxy(39, 18);
	cout << "Pork Burger";
	gotoxy(39, 19);
	cout << "$8,500" << endl << endl;
}
void SCREEN() {
	system("cls");
	cout << "  �����������������������������\n";
	cout << "  ��                                                    ��\n";
	cout << "  ��                                                    ��\n";
	cout << "  ��   ****    **  **  ******  ******  ***** ******     ��\n";
	cout << "  ��   *   *   **  **  *    *  *       *     *    *     ��\n";
	cout << "  ��   *****   **  **  ******  *  ***  ***** ******     ��\n";
	cout << "  ��   *    *  **  **  *  *    *    *  *     *  *       ��\n";
	cout << "  ��   *****   ******  *   *   ******  ***** *   *      ��\n";
	cout << "  ��                                                    ��\n";
	cout << "  ��                                                    ��\n";
	cout << "  ��   *  *  *   * ***** ***** ***** ****   ���� ����   ��\n";
	cout << "  ��   *  *  *   * *   *   *   *     *  *  ��   ��  ��  ��\n";
	cout << "  ��   ****  *   * *   *   *   ***** ****  ��       ��  ��\n";
	cout << "  ��   *  *  *   * *   *   *   *     **     ��     ��   ��\n";
	cout << "  ��   *  *  ***** *   *   *   ***** * **     ��  ��    ��\n";
	cout << "  ��                                            ��      ��\n";
	cout << "  ��                                                    ��\n";
	cout << "  ��    1. ��ȭ �ֹ�   2.�ܹ��� �޴�  3.���̵� �޴�     ��\n";
	cout << "  ��                                                    ��\n";
	cout << "  �����������������������������\n";
	cout << endl;
}
void CRY() {
	setcolor(12);
	cout << "                                                                          \n";
	cout << "             ����������������������                    \n";
	cout << "             ��   ________________________________   ��                        \n";
	cout << "             ��  l                                l  ��                   \n";
	cout << "             ��  l                                l  ��                     \n";
	cout << "             ��  l        ��             ��         l  ��                    \n";
	cout << "             ��  l                                l  ��                   \n";
	cout << "   ����    ��  l   ��          ��          ��   l  ��    ����        \n";
	cout << "   ��  �����  l                                l  �����  ��         \n";
	cout << "   ��        ��  l                                l  ��        ��          \n";
	cout << "   �������  l                                l  �������               \n";
	cout << "             ��  l                                l  ��                         \n";
	cout << "             ��  l                                l  ��                         \n";
	cout << "             ��  l                                l  ��                         \n";
	cout << "             ��  l        BURGER     HUNTER       l  ��                         \n";
	cout << "             ��  l                                l  ��                         \n";
	cout << "             ��  l________________________________l  ��                         \n";
	cout << "             ��                                      ��                         \n";
	cout << "             ����������������������                         \n";
	cout << "                   ��  ��                ��  ��                               \n";
	cout << "                   ��  ��                ��  ��                               \n";
	cout << "                 ��    ��                ��    ��                             \n";
	cout << "                 �����                �����                             \n";
	cout << "    �����Ͻ� ���̵�޴��� ǰ���Դϴ�!   �� �ٸ� �޴��� ��ź����� ��             \n";
	cout << endl;
	setcolor(15);
}
void SMILE() {
	setcolor(3);
	cout << "                                                                          \n";
	cout << "             ������������������                  \n";
	cout << "             ��   ________________________   ��                        \n";
	cout << "             ��  l                        l  ��                   \n";
	cout << "             ��  l                        l  ��                     \n";
	cout << "             ��  l      ��         ��     l  ��                    \n";
	cout << "             ��  l                        l  ��                   \n";
	cout << "   ����    ��  l   ��      ��      ��   l  ��    ����          \n";
	cout << "   ��  �����  l                        l  �����  ��         \n";
	cout << "   ��        ��  l                        l  ��        ��           \n";
	cout << "   �������  l                        l  �������               \n";
	cout << "             ��  l                        l  ��                         \n";
	cout << "             ��  l   BURGER      HUNTER   l  ��                         \n";
	cout << "             ��  l________________________l  ��                         \n";
	cout << "             ��                              ��                         \n";
	cout << "             ������������������                         \n";
	cout << "                   ��  ��            ��  ��                               \n";
	cout << "                   ��  ��            ��  ��                               \n";
	cout << "                 ��    ��            ��    ��                             \n";
	cout << "                 �����            �����                             \n";
	cout << "      ����� �Ϸ�Ǿ����ϴ�!    �� ������ �� �̿����ּ��� ��      \n";
	cout << endl;
	setcolor(15);
}
void LOADING() {
	system("cls");
	Sleep(1000);
	setcolor(14);
	Sleep(200); cout << "                      �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�         \n";
	Sleep(200); cout << "                     ��                                 ��         \n";
	Sleep(200); cout << "                    ��       ��                    ��     ��         \n";
	Sleep(200); cout << "                   ��                                       ��         \n";
	Sleep(200); cout << "                  ��                                          ��         \n";
	Sleep(200); cout << "               �ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�         \n";
	Sleep(200); cout << "             �ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�         \n";
	Sleep(200); cout << "                 ��                                          ��         \n";
	Sleep(200); cout << "                 ��                   ��                     ��         \n";
	Sleep(200); cout << "                 ��                                          ��         \n";
	Sleep(200); cout << "                 ��     ��                           ��      ��         \n";
	Sleep(200); cout << "                 ��        ��~��~�� ��~��~��~��~��~��        ��         \n";
	Sleep(200); cout << "                  ��                                        ��          \n";
	Sleep(200); cout << "                   �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�          \n";
	Sleep(200); cout << "";
	Sleep(200); cout << endl;
	setcolor(7);
	system("cls");
}
void ��() {
	system("cls");
	mokdong mok;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "���������������������" << endl;
	cout << "  *           ��� �ּ��� ���       *  " << endl;
	cout << "���������������������" << endl;
	cout << "�̸��� �Է����ּ��� ��";
	cin >> name;
	mok.NAME(name);
	cout << "��ȣ�� �Է����ּ��� ��";
	cin >> phone;
	mok.PHONE(phone);
	cout << "�ּ��� �Է����ּ��� ��";
	cin >> address;
	mok.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	mok.show();
	setcolor(2);
	cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		��();
		break;
	case 1:
		system("cls");
		break;
	}
	void ����();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "������������������������������������\n";
		cout << "��                                ��\n";
		cout << "��    1. ī��   2. ����           ��\n";
		cout << "��                                ��\n";
		cout << "������������������������������������\n";
		cout << endl;
		cout << "�ش�Ǵ� �ֹ� ����� ������ �ּ��� ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
			cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				��();
				break;
			case 1:
				system("cls");
				break;
			}
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
			cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				��();
				break;
			case 1:
				system("cls");
				break;
			}
		}
	}
	int time, number;
	char ask[10];
	char com[10];
	SmartDelivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------������----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "���������������������" << endl;
	cout << "   *         �ܹ��� ���� ����        *" << endl;
	cout << "���������������������" << endl;
	cout << "�� �ݾ�:" << money << "��" << endl;
	cout << "****���� ����� ������ �ּ���****" << endl;

	cout << "�Һ� �Ⱓ�� �Է��ϼ��� ��";
	cin >> time;
	user.Time(time);
	cout << "�䱸 ������ �Է��ϼ��� ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "����Ʈ ������ ȸ�縦 �Է��ϼ��� ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.company_name_check();

	cout << "�����ϽǷ��� 0��,����ϽǷ��� 1���� �����ּ���.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "�� �ݾ� ��" << money << endl;
		cout << "���� ����ο� �� ��" << mok.liner - 1 << endl;
		cout << "ùȭ������ ���ư��÷��� 0��, �������� 1���� �����ּ���." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "���Ͻô� �޴��� �Է����ּ��� ��";
			cin >> input;
			if (input == 1)
				��ġ();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}

		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}

}
void ����() {
	system("cls");
	ohmokgyo oh;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "���������������������" << endl;
	cout << "  *           ��� �ּ��� ���       *  " << endl;
	cout << "���������������������" << endl;
	cout << "�̸��� �Է����ּ��� ��";
	cin >> name;
	oh.NAME(name);
	cout << "��ȣ�� �Է����ּ��� ��";
	cin >> phone;
	oh.PHONE(phone);
	cout << "�ּ��� �Է����ּ��� ��";
	cin >> address;
	oh.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	oh.show();
	setcolor(2);
	cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		����();
		break;
	case 1:
		system("cls");
		break;
	}
	void ����();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "������������������������������������\n";
		cout << "��                                ��\n";
		cout << "��    1. ī��   2. ����           ��\n";
		cout << "��                                ��\n";
		cout << "������������������������������������\n";
		cout << endl;
		cout << "�ش�Ǵ� �ֹ� ����� ������ �ּ��� ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
		}
	}

	cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		����();
		break;
	case 1:
		system("cls");
		break;
	}
	int time, number;
	char ask[10];
	char com[10];
	FastDelivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------������----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "���������������������" << endl;
	cout << "   *         �ܹ��� ���� ����        *" << endl;
	cout << "���������������������" << endl;
	cout << "�� �ݾ�:" << money << "��" << endl;
	cout << "****���� ����� ������ �ּ���****" << endl;

	cout << "�Һ� �Ⱓ�� �Է��ϼ��� ��";
	cin >> time;
	user.Time(time);
	cout << "�䱸 ������ �Է��ϼ��� ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "����Ʈ ������ ȸ�縦 �Է��ϼ��� ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "�����ϽǷ��� 0��,����ϽǷ��� 1���� �����ּ���.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "�� �ݾ� ��" << money << endl;
		cout << "���� ����ο� �� ��" << oh.liner - 1 << endl;
		cout << "ùȭ������ ���ư��÷��� 0��, �������� 1���� �����ּ���." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "���Ͻô� �޴��� �Է����ּ��� ��";
			cin >> input;
			if (input == 1)
				��ġ();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}
			else if (input == 3) {
				system("cls");
				��Ƣ2();
				�ݶ�2();
				ġ�ƽ2();
				SIDEBUY();
			}
		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}

}
void ������() {
	system("cls");
	yeongpo po;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "���������������������" << endl;
	cout << "  *           ��� �ּ��� ���       *  " << endl;
	cout << "���������������������" << endl;
	cout << "�̸��� �Է����ּ��� ��";
	cin >> name;
	po.NAME(name);
	cout << "��ȣ�� �Է����ּ��� ��";
	cin >> phone;
	po.PHONE(phone);
	cout << "�ּ��� �Է����ּ��� ��";
	cin >> address;
	po.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	po.show();
	setcolor(2);
	cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		������();
		break;
	case 1:
		system("cls");
		break;
	}
	void ����();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "������������������������������������\n";
		cout << "��                                ��\n";
		cout << "��    1. ī��   2. ����           ��\n";
		cout << "��                                ��\n";
		cout << "������������������������������������\n";
		cout << endl;
		cout << "�ش�Ǵ� �ֹ� ����� ������ �ּ��� ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			������();
		}
	}
	cout << "���Է��� 0, ��� ������ 1�� �Է����ּ��� ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		������();
		break;
	case 1:
		system("cls");
		break;
	}
	int time, number;
	char ask[10];
	char com[10];
	Delivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------������----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "���������������������" << endl;
	cout << "   *         �ܹ��� ���� ����        *" << endl;
	cout << "���������������������" << endl;
	cout << "�� �ݾ�:" << money << "��" << endl;
	cout << "****���� ����� ������ �ּ���****" << endl;

	cout << "�Һ� �Ⱓ�� �Է��ϼ��� ��";
	cin >> time;
	user.Time(time);
	cout << "�䱸 ������ �Է��ϼ��� ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "����Ʈ ������ ȸ�縦 �Է��ϼ��� ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "�����ϽǷ��� 0��,����ϽǷ��� 1���� �����ּ���.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "�� �ݾ� ��" << money << endl;
		cout << "���� ����ο� �� ��" << po.liner - 1 << endl;
		cout << "ùȭ������ ���ư��÷��� 0��, �������� 1���� �����ּ���." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "���Ͻô� �޴��� �Է����ּ��� ��";
			cin >> input;
			if (input == 1)
				��ġ();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}
			else if (input == 3) {
				system("cls");
				��Ƣ2();
				�ݶ�2();
				ġ�ƽ2();
				SIDEBUY();
			}
		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}
}


void ��ġ() {
	system("cls");
	int input;
	cout << "������������������������������������������������������\n";
	cout << "��                                                  ��\n";
	cout << "��          1. ��   2. ����   3. ������         ��\n";
	cout << "��                                                  ��\n";
	cout << "������������������������������������������������������\n";
	cout << endl;
	cout << "�ش�Ǵ� �ֹ� ������ ������ �ּ��� ��";
	cin >> input;

	if (input == 1)
		��();
	else if (input == 2)
		����();
	else if (input == 3)
		������();

}
void ��Ƣ2() {

	gotoxy(0, 0);
	cout << "================================================================================";
	gotoxy(0, 1);
	cout << "       �� ���̵� �޴��� ������ �� �ִ� �� �Դϴ�. ��󺸼��� ��";
	gotoxy(0, 2);
	cout << "================================================================================";
	setcolor(15);
	gotoxy(11, 5);
	cout << "1.����Ƣ��\n";
	gotoxy(0, 6);
	cout << "\n";
	gotoxy(0, 7);
	cout << "            ��    \n";
	gotoxy(0, 8);
	cout << "           ���   \n";
	gotoxy(0, 9);
	cout << "           ���    \n";
	gotoxy(0, 10);
	cout << "           ��� ���    \n";
	gotoxy(0, 11);
	cout << "           ��� ���      \n";
	gotoxy(0, 12);
	cout << "           ��� ��� ���    \n";
	gotoxy(0, 13);
	cout << "        �� ��� ��� ��� ��     \n";
	gotoxy(0, 14);
	cout << "        �� ��� ��� ��� ��    \n";
	gotoxy(0, 15);
	cout << "        �� ��� ��� ��� ��     \n";
	gotoxy(0, 16);
	cout << "        �� ��� ��� ��� ��     \n";
	gotoxy(0, 17);
	cout << "        �� ��� ��� ��� ��     \n";
	gotoxy(0, 18);
	cout << "        �����������     \n";
	gotoxy(0, 19);
	cout << "        �����������    \n";
	gotoxy(0, 20);
	cout << "        �����������     \n";
	cout << endl;
	gotoxy(13, 21);
	cout << "1,500��" << endl;
	gotoxy(9, 22);
	cout << "����Ƣ�� ��� :" << ��Ƣ << "��" << endl;
}
void ��Ƣ1() {
	setcolor(15);
	int input;
	cout << "           ��          \n";
	cout << "         ����          \n";
	cout << "         ����          \n";
	cout << "         ���� ����          \n";
	cout << "         ���� ����          \n";
	cout << "         ���� ����        ���        �� ����Ƣ�� ���Ű� �Ϸ�Ǿ����ϴ� ��  \n";
	cout << "    ��   ���� ����        ���    ��          \n";
	cout << "    ��   ���� ����   ��   ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��   ���� ����  ���  ���    ��          \n";
	cout << "    ��                                ��          \n";
	cout << "    �������������������          \n";
	cout << endl;


	cout << "���� ���忡 �ִ� ����Ƣ�� ������ " << ��Ƣ << "�� �Դϴ�" << endl << endl;
	cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "���Ͻô� �޴��� �Է����ּ��� ��";
		cin >> input;
		if (input == 1)
			��ġ();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			��Ƣ2();
			�ݶ�2();
			ġ�ƽ2();
			SIDEBUY();
		}
	}

}
void �ݶ�2() {

	setcolor(13);
	gotoxy(40, 5);
	cout << "2.�ݶ�\n";
	gotoxy(30, 6);
	cout << "                                                             \n";
	gotoxy(30, 7);
	cout << "            ����           \n";
	gotoxy(30, 8);
	cout << "            ��           \n";
	gotoxy(30, 9);
	cout << "           ���           \n";
	gotoxy(30, 10);
	cout << "   ��      ���      ��   \n";
	gotoxy(30, 11);
	cout << "   ��      ���      ��   \n";
	gotoxy(30, 12);
	cout << "   ��                ��   \n";
	gotoxy(30, 13);
	cout << "   �ܡܡܡܡܡܡܡܡܡ�   \n";
	gotoxy(30, 14);
	cout << "   �ܡ�            �ܡ�  \n";
	gotoxy(30, 15);
	cout << "   �ܡ�            �ܡ�   \n";
	gotoxy(30, 16);
	cout << "   �ܡ�  ��    ��  �ܡ�    \n";
	gotoxy(30, 17);
	cout << "   �ܡ�            �ܡ� \n";
	gotoxy(30, 18);
	cout << "   �ܡ�     ��     �ܡ�   \n";
	gotoxy(30, 19);
	cout << "   �ܡܡܡܡܡܡܡܡܡ�    \n";
	gotoxy(30, 20);
	cout << "    �ܡܡܡܡܡܡܡܡ�   \n";
	gotoxy(30, 21);
	cout << endl;
	gotoxy(39, 21);
	cout << "1,000��" << endl;
	setcolor(15);
	gotoxy(36, 22);
	cout << "�ݶ� ��� :" << �ݶ� << "��" << endl;
}

void �ݶ�1() {
	setcolor(13);
	int input;
	cout << "                         \n";
	cout << "             ����           \n";
	cout << "             ��           \n";
	cout << "            ���           \n";
	cout << "    ��      ���      ��      �� ���Ű� �Ϸ�Ǿ����ϴ� ��     \n";
	cout << "    ��      ���      ��           \n";
	cout << "    ��      ���      ��           \n";
	cout << "    ��      ���      ��           \n";
	cout << "    ��                ��           \n";
	cout << "    �ܡܡܡܡܡܡܡܡܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡ�  ��    ��  �ܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡ�     ��     �ܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡ�            �ܡ�           \n";
	cout << "    �ܡܡܡܡܡܡܡܡܡ�           \n";
	cout << "     �ܡܡܡܡܡܡܡܡ�           \n";
	cout << endl;
	setcolor(15);
	cout << "���� ���忡 �ִ� �ݶ󰳼��� " << �ݶ� << "�� �Դϴ�" << endl << endl;
	cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "���Ͻô� �޴��� �Է����ּ��� ��";
		cin >> input;
		if (input == 1)
			��ġ();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			��Ƣ2();
			�ݶ�2();
			ġ�ƽ2();
			SIDEBUY();
		}
	}
}

void ġ�ƽ2() {
	setcolor(14);
	gotoxy(63, 5);
	cout << "3.ġ�ƽ\n";
	gotoxy(55, 6);
	cout << "                         \n";
	gotoxy(55, 7);
	cout << "               �ۡ�       \n";
	gotoxy(55, 8);
	cout << "              �� * ��       \n";
	gotoxy(55, 9);
	cout << "              �� * ��      \n";
	gotoxy(55, 10);
	cout << "      �ۡ�    �� * ��       \n";
	gotoxy(55, 11);
	cout << "  || ��   ��  �� * �� ||     \n";
	gotoxy(55, 12);
	cout << "  || �� * ��  �� * �� ||    \n";
	gotoxy(55, 13);
	cout << "  || �� * ��  �� * �� ||      \n";
	gotoxy(55, 14);
	cout << "  || �� * ��  �� * �� ||    \n";
	gotoxy(55, 15);
	cout << "  || �� * ��  �� * �� ||     \n";
	gotoxy(55, 16);
	cout << "  || �� * ��  �� * �� ||    \n";
	gotoxy(55, 17);
	cout << "  || ��  ��   �� * �� ||      \n";
	gotoxy(55, 18);
	cout << "  ||  �ۡ�     �� ��  ||   \n";
	gotoxy(55, 19);
	cout << "  ||__________________||    \n";
	gotoxy(55, 20);
	cout << "  |____________________|    \n";
	cout << endl;
	gotoxy(65, 21);
	cout << "2,000��" << endl;
	setcolor(15);
	gotoxy(60, 22);
	cout << "ġ�ƽ ��� :" << ġ�ƽ << "��" << endl;
}

void ġ�ƽ1() {
	setcolor(14);
	int input;
	cout << "                            \n";
	cout << "                             \n";
	cout << "                 �� ��          \n";
	cout << "         �ۡ�   �� * ��          \n";
	cout << "       ��   ��  �� * ��       �� ���Ű� �Ϸ�Ǿ����ϴ� ��   \n";
	cout << "       �� * ��  �� * ��          \n";
	cout << "       �� * ��  �� * ��          \n";
	cout << "       �� * ��  �� * ��          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || �� * ��  �� * �� ||          \n";
	cout << "    || ��  ��   �� * �� ||          \n";
	cout << "    ||  �ۡ�     �� ��  ||          \n";
	cout << "    ||__________________||          \n";
	cout << "    |____________________|          \n";
	cout << endl;
	setcolor(15);
	cout << "���� ���忡 �ִ� ġ�ƽ ������ " << ġ�ƽ << "�� �Դϴ�" << endl << endl;
	cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "���Ͻô� �޴��� �Է����ּ��� ��";
		cin >> input;
		if (input == 1)
			��ġ();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			��Ƣ2();
			�ݶ�2();
			ġ�ƽ2();
			SIDEBUY();
		}
	}
}
void SIDEBUY() {
	int input;
	cout << endl << endl;
	cout << "�����Ͻ� ���̵带 �����Ͽ� �ּ��� �� ";
	cin >> input;
	switch (input) {
	case 1:
		if (��Ƣ == 0) {
			system("cls");
			CRY();
			cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "���Ͻô� �޴��� �Է����ּ��� ��";
				cin >> input;
				if (input == 1)
					��ġ();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					��Ƣ2();
					�ݶ�2();
					ġ�ƽ2();
					SIDEBUY();
				}

			}
			return;
		}
		��Ƣ--;
		system("cls");
		��Ƣ1();
		break;
	case 2:
		if (�ݶ� == 0) {
			system("cls");
			CRY();
			cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "���Ͻô� �޴��� �Է����ּ��� ��";
				cin >> input;
				if (input == 1)
					��ġ();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					��Ƣ2();
					�ݶ�2();
					ġ�ƽ2();
					SIDEBUY();
				}

			}
			return;
		}
		�ݶ�--;
		system("cls");
		�ݶ�1();
		break;
	case 3:
		if (ġ�ƽ == 0) {
			system("cls");
			CRY();
			cout << "ó������ ���ư��÷��� 0��,�����÷��� 1���� �����ּ���" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "���Ͻô� �޴��� �Է����ּ��� ��";
				cin >> input;
				if (input == 1)
					��ġ();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					��Ƣ2();
					�ݶ�2();
					ġ�ƽ2();
					SIDEBUY();
				}

			}
			return;
		}
		ġ�ƽ--;
		system("cls");
		ġ�ƽ1();
		break;
	}
}
int main() {
	SCREEN();
	int input;
	cout << "���Ͻô� �޴��� �Է����ּ��� ��";
	cin >> input;
	if (input == 1)
		��ġ();
	else if (input == 2) {
		system("cls");
		BURGER1();
		BURGER2();
		BURGER3();
		BURGER4();
		BURGER5();
		BURGER6();
		BUY();
	}
	else if (input == 3) {
		system("cls");
		��Ƣ2();
		�ݶ�2();
		ġ�ƽ2();
		SIDEBUY();
	}
}