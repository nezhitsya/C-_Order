#include <iostream>
#include <Windows.h>
#include "Delivery.h"
#include "Location.h"
using namespace std;
int money = 0;
int 감튀 = 1, 콜라 = 2, 치즈스틱 = 3;
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
void 목동();
void 오목교();
void 영등포();
void 위치();
void 결제();
void 영수증();
void 감튀1();
void 감튀2();
void 콜라1();
void 콜라2();
void 치즈스틱1();
void 치즈스틱2();
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
	cout << "구매하실 햄버거의 번호를 입력해 주세요 ☞ ";
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
	Sleep(200); cout << "    ■■■■■■■■■■■■■■■■■■■■■■■■■■      \n";
	Sleep(200); cout << "    ■                                                ■      \n";
	Sleep(200); cout << "    ■                                                ■      \n";
	Sleep(200); cout << "    ■         ■      ■■   ■■   ■■   ■■      ■      \n";
	Sleep(200); cout << "    ■       ■■     ■  ■ ■  ■ ■  ■ ■  ■     ■      \n";
	Sleep(200); cout << "    ■     ■  ■     ■  ■ ■  ■ ■  ■ ■  ■     ■      \n";
	Sleep(200); cout << "    ■         ■     ■  ■ ■  ■ ■  ■ ■  ■     ■      \n";
	Sleep(200); cout << "    ■         ■     ■  ■ ■  ■ ■  ■ ■  ■     ■      \n";
	Sleep(200); cout << "    ■         ■     ■  ■ ■  ■ ■  ■ ■  ■     ■      \n";
	Sleep(200); cout << "    ■     ■■■■■  ■■   ■■   ■■   ■■      ■      \n";
	Sleep(200); cout << "    ■                                                ■      \n";
	Sleep(200); cout << "    ■                                                ■      \n";
	Sleep(200); cout << "    ■■■■■■■■■■■■■■■■■■■■■■■■■■      \n\n";
	Sleep(200); cout << "                   $$$ 계산중입니다 $$$   \n";
	Sleep(200); cout << endl;
	Sleep(1000);
	system("cls");
	setcolor(3);
	cout << "              ●●●●●●●●●●●●●●●●●          \n";
	cout << "            ●                                  ●          \n";
	cout << "          ●                                      ●          \n";
	cout << "         ●        ∧                   ∧          ●          \n";
	cout << "        ●                                           ●        \n";
	cout << "       ◇                                            ◇          \n";
	cout << "       ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇          \n";
	cout << "      ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆          \n";
	cout << "    ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆          \n";
	cout << "      ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇          \n";
	cout << "      ◇                                            ◇          \n";
	cout << "       ●                   ∇                     ●          \n";
	cout << "       ●                                          ●          \n";
	cout << "       ●     ∞                          ∞       ●          \n";
	cout << "       ●                                          ●          \n";
	cout << "        ●                                        ●          \n";
	cout << "          ●●●●●●●●●●●●●●●●●●●●          \n";
	cout << "     구매가 완료되었습니다!    ♥ 다음에 또 이용해주세요 ♥ \n";
	cout << endl;
	setcolor(15);
	cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "원하시는 메뉴를 입력해주세요 ☞";
		cin >> input;
		if (input == 1)
			위치();
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
			감튀2();
			콜라2();
			치즈스틱2();
			SIDEBUY();
		}
	}
}

void 영수증() {
	setcolor(15);
	cout << "구매하실 햄버거의 번호를 입력해 주세요 ☞ ";
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
	cout << "     1번     \n";
	cout << "   ┎━━━━━━┓  \n";
	cout << "   ┃ ^o^♪┃    \n";
	cout << "   ────────    \n";
	cout << "   ────────    \n";
	cout << "   ┃      ┃    \n";
	cout << "   ┗━━━━━━┛\n";
	cout << endl;
	gotoxy(3, 8);
	cout << "Cheese Burger" << endl;
	gotoxy(3, 9);
	cout << "$8,900";
}
void BURGER2() {
	gotoxy(18, 1);
	setcolor(13);
	cout << "      2번    \n";
	gotoxy(18, 2);
	cout << "   ┎━━━━━━┓  \n";
	gotoxy(18, 3);
	cout << "   ┃↗∇↖┃  \n";
	gotoxy(18, 4);
	cout << "   ──────── \n";
	gotoxy(18, 5);
	cout << "   ────────  \n";
	gotoxy(18, 6);
	cout << "   ┃      ┃ \n";
	gotoxy(18, 7);
	cout << "   ┗━━━━━━┛  \n";
	cout << endl;
	gotoxy(21, 8);
	cout << "Shrimp Burger";
	gotoxy(21, 9);
	cout << "$9,300";
}
void BURGER3() {
	gotoxy(37, 1);
	setcolor(14);
	cout << "     3번    \n";
	gotoxy(37, 2);
	cout << "  ┎━━━━━━┓ \n";
	gotoxy(37, 3);
	cout << "  ┃ ^ㅁ^ ┃  \n";
	gotoxy(37, 4);
	cout << "  ────────  \n";
	gotoxy(37, 5);
	cout << "  ────────  \n";
	gotoxy(37, 6);
	cout << "  ┃      ┃  \n";
	gotoxy(37, 7);
	cout << "  ┗━━━━━━┛ \n";
	cout << endl;
	gotoxy(39, 8);
	cout << "Chicken Burger";
	gotoxy(39, 9);
	cout << "$8,500";
}
void BURGER4() {
	gotoxy(1, 11);
	setcolor(10);
	cout << "     4번           \n";
	cout << "   ┎━━━━━━┓  \n";
	cout << "   ┃ ^ε^ ┃    \n";
	cout << "   ────────    \n";
	cout << "   ────────    \n";
	cout << "   ┃      ┃    \n";
	cout << "   ┗━━━━━━┛\n";
	cout << endl;
	gotoxy(3, 18);
	cout << "Taco Burger";
	gotoxy(3, 19);
	cout << "$9,500";
}
void BURGER5() {
	gotoxy(18, 11);
	setcolor(11);
	cout << "      5번           \n";
	gotoxy(18, 12);
	cout << "   ┎━━━━━━┓  \n";
	gotoxy(18, 13);
	cout << "   ┃ ^ㅡ^ ┃  \n";
	gotoxy(18, 14);
	cout << "   ──────── \n";
	gotoxy(18, 15);
	cout << "   ────────  \n";
	gotoxy(18, 16);
	cout << "   ┃      ┃ \n";
	gotoxy(18, 17);
	cout << "   ┗━━━━━━┛  \n";
	cout << endl;
	gotoxy(21, 18);
	cout << "Beef Burger";
	gotoxy(21, 19);
	cout << "$12,500";
}
void BURGER6() {
	gotoxy(31, 11);
	setcolor(7);
	cout << "       6번       \n";
	gotoxy(37, 12);
	cout << "  ┎━━━━━━┓ \n";
	gotoxy(37, 13);
	cout << "  ┃('_'))┃  \n";
	gotoxy(37, 14);
	cout << "  ────────  \n";
	gotoxy(37, 15);
	cout << "  ────────  \n";
	gotoxy(37, 16);
	cout << "  ┃      ┃  \n";
	gotoxy(37, 17);
	cout << "  ┗━━━━━━┛ \n";
	cout << endl;
	gotoxy(39, 18);
	cout << "Pork Burger";
	gotoxy(39, 19);
	cout << "$8,500" << endl << endl;
}
void SCREEN() {
	system("cls");
	cout << "  □□□□□□□□□□□□□□□□□□□□□□□□□□□□\n";
	cout << "  □                                                    □\n";
	cout << "  □                                                    □\n";
	cout << "  □   ****    **  **  ******  ******  ***** ******     □\n";
	cout << "  □   *   *   **  **  *    *  *       *     *    *     □\n";
	cout << "  □   *****   **  **  ******  *  ***  ***** ******     □\n";
	cout << "  □   *    *  **  **  *  *    *    *  *     *  *       □\n";
	cout << "  □   *****   ******  *   *   ******  ***** *   *      □\n";
	cout << "  □                                                    □\n";
	cout << "  □                                                    □\n";
	cout << "  □   *  *  *   * ***** ***** ***** ****   ♥♥ ♥♥   □\n";
	cout << "  □   *  *  *   * *   *   *   *     *  *  ♥   ♥  ♥  □\n";
	cout << "  □   ****  *   * *   *   *   ***** ****  ♥       ♥  □\n";
	cout << "  □   *  *  *   * *   *   *   *     **     ♥     ♥   □\n";
	cout << "  □   *  *  ***** *   *   *   ***** * **     ♥  ♥    □\n";
	cout << "  □                                            ♥      □\n";
	cout << "  □                                                    □\n";
	cout << "  □    1. 전화 주문   2.햄버거 메뉴  3.사이드 메뉴     □\n";
	cout << "  □                                                    □\n";
	cout << "  □□□□□□□□□□□□□□□□□□□□□□□□□□□□\n";
	cout << endl;
}
void CRY() {
	setcolor(12);
	cout << "                                                                          \n";
	cout << "             ■■■■■■■■■■■■■■■■■■■■■                    \n";
	cout << "             ■   ________________________________   ■                        \n";
	cout << "             ■  l                                l  ■                   \n";
	cout << "             ■  l                                l  ■                     \n";
	cout << "             ■  l        ┳             ┳         l  ■                    \n";
	cout << "             ■  l                                l  ■                   \n";
	cout << "   ■■■    ■  l   ♡          ▲          ♡   l  ■    ■■■        \n";
	cout << "   ■  ■■■■  l                                l  ■■■■  ■         \n";
	cout << "   ■        ■  l                                l  ■        ■          \n";
	cout << "   ■■■■■■  l                                l  ■■■■■■               \n";
	cout << "             ■  l                                l  ■                         \n";
	cout << "             ■  l                                l  ■                         \n";
	cout << "             ■  l                                l  ■                         \n";
	cout << "             ■  l        BURGER     HUNTER       l  ■                         \n";
	cout << "             ■  l                                l  ■                         \n";
	cout << "             ■  l________________________________l  ■                         \n";
	cout << "             ■                                      ■                         \n";
	cout << "             ■■■■■■■■■■■■■■■■■■■■■                         \n";
	cout << "                   ■  ■                ■  ■                               \n";
	cout << "                   ■  ■                ■  ■                               \n";
	cout << "                 ■    ■                ■    ■                             \n";
	cout << "                 ■■■■                ■■■■                             \n";
	cout << "    선택하신 사이드메뉴가 품절입니다!   ♥ 다른 메뉴를 드셔보세요 ♥             \n";
	cout << endl;
	setcolor(15);
}
void SMILE() {
	setcolor(3);
	cout << "                                                                          \n";
	cout << "             ■■■■■■■■■■■■■■■■■                  \n";
	cout << "             ■   ________________________   ■                        \n";
	cout << "             ■  l                        l  ■                   \n";
	cout << "             ■  l                        l  ■                     \n";
	cout << "             ■  l      ●         ●     l  ■                    \n";
	cout << "             ■  l                        l  ■                   \n";
	cout << "   ■■■    ■  l   ♡      ▼      ♡   l  ■    ■■■          \n";
	cout << "   ■  ■■■■  l                        l  ■■■■  ■         \n";
	cout << "   ■        ■  l                        l  ■        ■           \n";
	cout << "   ■■■■■■  l                        l  ■■■■■■               \n";
	cout << "             ■  l                        l  ■                         \n";
	cout << "             ■  l   BURGER      HUNTER   l  ■                         \n";
	cout << "             ■  l________________________l  ■                         \n";
	cout << "             ■                              ■                         \n";
	cout << "             ■■■■■■■■■■■■■■■■■                         \n";
	cout << "                   ■  ■            ■  ■                               \n";
	cout << "                   ■  ■            ■  ■                               \n";
	cout << "                 ■    ■            ■    ■                             \n";
	cout << "                 ■■■■            ■■■■                             \n";
	cout << "      계산이 완료되었습니다!    ♥ 다음에 또 이용해주세요 ♥      \n";
	cout << endl;
	setcolor(15);
}
void LOADING() {
	system("cls");
	Sleep(1000);
	setcolor(14);
	Sleep(200); cout << "                      ●●●●●●●●●●●●●●●●●         \n";
	Sleep(200); cout << "                     ●                                 ●         \n";
	Sleep(200); cout << "                    ●       ●                    ●     ●         \n";
	Sleep(200); cout << "                   ●                                       ●         \n";
	Sleep(200); cout << "                  ●                                          ●         \n";
	Sleep(200); cout << "               ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆         \n";
	Sleep(200); cout << "             ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆         \n";
	Sleep(200); cout << "                 ●                                          ●         \n";
	Sleep(200); cout << "                 ●                   ▼                     ●         \n";
	Sleep(200); cout << "                 ●                                          ●         \n";
	Sleep(200); cout << "                 ●     ♥                           ♥      ●         \n";
	Sleep(200); cout << "                 ●        잠~시~만 기~다~려~주~세~용        ●         \n";
	Sleep(200); cout << "                  ●                                        ●          \n";
	Sleep(200); cout << "                   ●●●●●●●●●●●●●●●●●●●●●          \n";
	Sleep(200); cout << "";
	Sleep(200); cout << endl;
	setcolor(7);
	system("cls");
}
void 목동() {
	system("cls");
	mokdong mok;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "  *           배달 주소지 등록       *  " << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "이름을 입력해주세요 ☞";
	cin >> name;
	mok.NAME(name);
	cout << "번호를 입력해주세요 ☞";
	cin >> phone;
	mok.PHONE(phone);
	cout << "주소을 입력해주세요 ☞";
	cin >> address;
	mok.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	mok.show();
	setcolor(2);
	cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		목동();
		break;
	case 1:
		system("cls");
		break;
	}
	void 결제();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁ    1. 카드   2. 현금           ㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << endl;
		cout << "해당되는 주문 방법을 선택해 주세요 ☞";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			영수증();
			cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				목동();
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
			영수증();
			cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				목동();
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
	cout << "---------------영수증----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "   *         햄버거 구매 가격        *" << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "총 금액:" << money << "원" << endl;
	cout << "****구매 방법을 선택해 주세요****" << endl;

	cout << "할부 기간을 입력하세요 ☞";
	cin >> time;
	user.Time(time);
	cout << "요구 사항을 입력하세요 ☞";
	cin >> ask;
	user.asktype_name(ask);
	cout << "포인트 적립할 회사를 입력하세요 ☞";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.company_name_check();

	cout << "구매하실려면 0번,취소하실려면 1번은 눌러주세요.☞";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "총 금액 ☞" << money << endl;
		cout << "현재 대기인원 수 ☞" << mok.liner - 1 << endl;
		cout << "첫화면으로 돌아가시려면 0번, 끝내려면 1번을 눌러주세요." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "원하시는 메뉴를 입력해주세요 ☞";
			cin >> input;
			if (input == 1)
				위치();
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
void 오목교() {
	system("cls");
	ohmokgyo oh;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "  *           배달 주소지 등록       *  " << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "이름을 입력해주세요 ☞";
	cin >> name;
	oh.NAME(name);
	cout << "번호를 입력해주세요 ☞";
	cin >> phone;
	oh.PHONE(phone);
	cout << "주소을 입력해주세요 ☞";
	cin >> address;
	oh.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	oh.show();
	setcolor(2);
	cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		오목교();
		break;
	case 1:
		system("cls");
		break;
	}
	void 결제();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁ    1. 카드   2. 현금           ㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << endl;
		cout << "해당되는 주문 방법을 선택해 주세요 ☞";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			영수증();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			영수증();
		}
	}

	cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		오목교();
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
	cout << "---------------영수증----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "   *         햄버거 구매 가격        *" << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "총 금액:" << money << "원" << endl;
	cout << "****구매 방법을 선택해 주세요****" << endl;

	cout << "할부 기간을 입력하세요 ☞";
	cin >> time;
	user.Time(time);
	cout << "요구 사항을 입력하세요 ☞";
	cin >> ask;
	user.asktype_name(ask);
	cout << "포인트 적립할 회사를 입력하세요 ☞";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "구매하실려면 0번,취소하실려면 1번은 눌러주세요.☞";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "총 금액 ☞" << money << endl;
		cout << "현재 대기인원 수 ☞" << oh.liner - 1 << endl;
		cout << "첫화면으로 돌아가시려면 0번, 끝내려면 1번을 눌러주세요." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "원하시는 메뉴를 입력해주세요 ☞";
			cin >> input;
			if (input == 1)
				위치();
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
				감튀2();
				콜라2();
				치즈스틱2();
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
void 영등포() {
	system("cls");
	yeongpo po;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "  *           배달 주소지 등록       *  " << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "이름을 입력해주세요 ☞";
	cin >> name;
	po.NAME(name);
	cout << "번호를 입력해주세요 ☞";
	cin >> phone;
	po.PHONE(phone);
	cout << "주소을 입력해주세요 ☞";
	cin >> address;
	po.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	po.show();
	setcolor(2);
	cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		영등포();
		break;
	case 1:
		system("cls");
		break;
	}
	void 결제();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁ    1. 카드   2. 현금           ㅁ\n";
		cout << "ㅁ                                ㅁ\n";
		cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
		cout << endl;
		cout << "해당되는 주문 방법을 선택해 주세요 ☞";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			영수증();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			영수증();
		}
	}
	cout << "재입력은 0, 계속 진행은 1을 입력해주세요 ☞";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		영등포();
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
	cout << "---------------영수증----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "   *         햄버거 구매 가격        *" << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << "총 금액:" << money << "원" << endl;
	cout << "****구매 방법을 선택해 주세요****" << endl;

	cout << "할부 기간을 입력하세요 ☞";
	cin >> time;
	user.Time(time);
	cout << "요구 사항을 입력하세요 ☞";
	cin >> ask;
	user.asktype_name(ask);
	cout << "포인트 적립할 회사를 입력하세요 ☞";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "구매하실려면 0번,취소하실려면 1번은 눌러주세요.☞";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "총 금액 ☞" << money << endl;
		cout << "현재 대기인원 수 ☞" << po.liner - 1 << endl;
		cout << "첫화면으로 돌아가시려면 0번, 끝내려면 1번을 눌러주세요." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "원하시는 메뉴를 입력해주세요 ☞";
			cin >> input;
			if (input == 1)
				위치();
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
				감튀2();
				콜라2();
				치즈스틱2();
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


void 위치() {
	system("cls");
	int input;
	cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
	cout << "ㅁ                                                  ㅁ\n";
	cout << "ㅁ          1. 목동   2. 오목교   3. 영등포         ㅁ\n";
	cout << "ㅁ                                                  ㅁ\n";
	cout << "ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n";
	cout << endl;
	cout << "해당되는 주문 지역을 선택해 주세요 ☞";
	cin >> input;

	if (input == 1)
		목동();
	else if (input == 2)
		오목교();
	else if (input == 3)
		영등포();

}
void 감튀2() {

	gotoxy(0, 0);
	cout << "================================================================================";
	gotoxy(0, 1);
	cout << "       ★ 사이드 메뉴를 구매할 수 있는 곳 입니다. 골라보세요 ★";
	gotoxy(0, 2);
	cout << "================================================================================";
	setcolor(15);
	gotoxy(11, 5);
	cout << "1.감자튀김\n";
	gotoxy(0, 6);
	cout << "\n";
	gotoxy(0, 7);
	cout << "            ■    \n";
	gotoxy(0, 8);
	cout << "           ■■   \n";
	gotoxy(0, 9);
	cout << "           ■■    \n";
	gotoxy(0, 10);
	cout << "           ■■ ■■    \n";
	gotoxy(0, 11);
	cout << "           ■■ ■■      \n";
	gotoxy(0, 12);
	cout << "           ■■ ■■ ■■    \n";
	gotoxy(0, 13);
	cout << "        □ ■■ ■■ ■■ □     \n";
	gotoxy(0, 14);
	cout << "        □ ■■ ■■ ■■ □    \n";
	gotoxy(0, 15);
	cout << "        □ ■■ ■■ ■■ □     \n";
	gotoxy(0, 16);
	cout << "        □ ■■ ■■ ■■ □     \n";
	gotoxy(0, 17);
	cout << "        □ ■■ ■■ ■■ □     \n";
	gotoxy(0, 18);
	cout << "        □□□□□□□□□□     \n";
	gotoxy(0, 19);
	cout << "        □□□□□□□□□□    \n";
	gotoxy(0, 20);
	cout << "        □□□□□□□□□□     \n";
	cout << endl;
	gotoxy(13, 21);
	cout << "1,500원" << endl;
	gotoxy(9, 22);
	cout << "감자튀김 재고 :" << 감튀 << "개" << endl;
}
void 감튀1() {
	setcolor(15);
	int input;
	cout << "           ■          \n";
	cout << "         ■■■          \n";
	cout << "         ■■■          \n";
	cout << "         ■■■ ■■■          \n";
	cout << "         ■■■ ■■■          \n";
	cout << "         ■■■ ■■■        ■■        ♬ 감자튀김 구매가 완료되었습니다 ♬  \n";
	cout << "    □   ■■■ ■■■        ■■    □          \n";
	cout << "    □   ■■■ ■■■   ■   ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □   ■■■ ■■■  ■■  ■■    □          \n";
	cout << "    □                                □          \n";
	cout << "    □□□□□□□□□□□□□□□□□□          \n";
	cout << endl;


	cout << "현재 매장에 있는 감자튀김 개수는 " << 감튀 << "개 입니다" << endl << endl;
	cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "원하시는 메뉴를 입력해주세요 ☞";
		cin >> input;
		if (input == 1)
			위치();
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
			감튀2();
			콜라2();
			치즈스틱2();
			SIDEBUY();
		}
	}

}
void 콜라2() {

	setcolor(13);
	gotoxy(40, 5);
	cout << "2.콜라\n";
	gotoxy(30, 6);
	cout << "                                                             \n";
	gotoxy(30, 7);
	cout << "            □□□           \n";
	gotoxy(30, 8);
	cout << "            □           \n";
	gotoxy(30, 9);
	cout << "           □□           \n";
	gotoxy(30, 10);
	cout << "   ●      □□      ●   \n";
	gotoxy(30, 11);
	cout << "   ●      □□      ●   \n";
	gotoxy(30, 12);
	cout << "   ●                ●   \n";
	gotoxy(30, 13);
	cout << "   ●●●●●●●●●●   \n";
	gotoxy(30, 14);
	cout << "   ●●            ●●  \n";
	gotoxy(30, 15);
	cout << "   ●●            ●●   \n";
	gotoxy(30, 16);
	cout << "   ●●  ◎    ◎  ●●    \n";
	gotoxy(30, 17);
	cout << "   ●●            ●● \n";
	gotoxy(30, 18);
	cout << "   ●●     ▼     ●●   \n";
	gotoxy(30, 19);
	cout << "   ●●●●●●●●●●    \n";
	gotoxy(30, 20);
	cout << "    ●●●●●●●●●   \n";
	gotoxy(30, 21);
	cout << endl;
	gotoxy(39, 21);
	cout << "1,000원" << endl;
	setcolor(15);
	gotoxy(36, 22);
	cout << "콜라 재고 :" << 콜라 << "개" << endl;
}

void 콜라1() {
	setcolor(13);
	int input;
	cout << "                         \n";
	cout << "             □□□           \n";
	cout << "             □           \n";
	cout << "            □□           \n";
	cout << "    ●      □□      ●      ♥ 구매가 완료되었습니다 ♥     \n";
	cout << "    ●      □□      ●           \n";
	cout << "    ●      □□      ●           \n";
	cout << "    ●      □□      ●           \n";
	cout << "    ●                ●           \n";
	cout << "    ●●●●●●●●●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●  ◑    ◐  ●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●     ●     ●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●            ●●           \n";
	cout << "    ●●●●●●●●●●           \n";
	cout << "     ●●●●●●●●●           \n";
	cout << endl;
	setcolor(15);
	cout << "현재 매장에 있는 콜라개수는 " << 콜라 << "개 입니다" << endl << endl;
	cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "원하시는 메뉴를 입력해주세요 ☞";
		cin >> input;
		if (input == 1)
			위치();
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
			감튀2();
			콜라2();
			치즈스틱2();
			SIDEBUY();
		}
	}
}

void 치즈스틱2() {
	setcolor(14);
	gotoxy(63, 5);
	cout << "3.치즈스틱\n";
	gotoxy(55, 6);
	cout << "                         \n";
	gotoxy(55, 7);
	cout << "               ○○       \n";
	gotoxy(55, 8);
	cout << "              ○ * ○       \n";
	gotoxy(55, 9);
	cout << "              ○ * ○      \n";
	gotoxy(55, 10);
	cout << "      ○○    ○ * ○       \n";
	gotoxy(55, 11);
	cout << "  || ○   ○  ○ * ○ ||     \n";
	gotoxy(55, 12);
	cout << "  || ○ * ○  ○ * ○ ||    \n";
	gotoxy(55, 13);
	cout << "  || ○ * ○  ○ * ○ ||      \n";
	gotoxy(55, 14);
	cout << "  || ○ * ○  ○ * ○ ||    \n";
	gotoxy(55, 15);
	cout << "  || ○ * ○  ○ * ○ ||     \n";
	gotoxy(55, 16);
	cout << "  || ○ * ○  ○ * ○ ||    \n";
	gotoxy(55, 17);
	cout << "  || ○  ○   ○ * ○ ||      \n";
	gotoxy(55, 18);
	cout << "  ||  ○○     ○ ○  ||   \n";
	gotoxy(55, 19);
	cout << "  ||__________________||    \n";
	gotoxy(55, 20);
	cout << "  |____________________|    \n";
	cout << endl;
	gotoxy(65, 21);
	cout << "2,000원" << endl;
	setcolor(15);
	gotoxy(60, 22);
	cout << "치즈스틱 재고 :" << 치즈스틱 << "개" << endl;
}

void 치즈스틱1() {
	setcolor(14);
	int input;
	cout << "                            \n";
	cout << "                             \n";
	cout << "                 ○ ○          \n";
	cout << "         ○○   ○ * ○          \n";
	cout << "       ○   ○  ○ * ○       ♨ 구매가 완료되었습니다 ♨   \n";
	cout << "       ○ * ○  ○ * ○          \n";
	cout << "       ○ * ○  ○ * ○          \n";
	cout << "       ○ * ○  ○ * ○          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○ * ○  ○ * ○ ||          \n";
	cout << "    || ○  ○   ○ * ○ ||          \n";
	cout << "    ||  ○○     ○ ○  ||          \n";
	cout << "    ||__________________||          \n";
	cout << "    |____________________|          \n";
	cout << endl;
	setcolor(15);
	cout << "현재 매장에 있는 치즈스틱 개수는 " << 치즈스틱 << "개 입니다" << endl << endl;
	cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "원하시는 메뉴를 입력해주세요 ☞";
		cin >> input;
		if (input == 1)
			위치();
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
			감튀2();
			콜라2();
			치즈스틱2();
			SIDEBUY();
		}
	}
}
void SIDEBUY() {
	int input;
	cout << endl << endl;
	cout << "선택하실 사이드를 선택하여 주세요 ☞ ";
	cin >> input;
	switch (input) {
	case 1:
		if (감튀 == 0) {
			system("cls");
			CRY();
			cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "원하시는 메뉴를 입력해주세요 ☞";
				cin >> input;
				if (input == 1)
					위치();
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
					감튀2();
					콜라2();
					치즈스틱2();
					SIDEBUY();
				}

			}
			return;
		}
		감튀--;
		system("cls");
		감튀1();
		break;
	case 2:
		if (콜라 == 0) {
			system("cls");
			CRY();
			cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "원하시는 메뉴를 입력해주세요 ☞";
				cin >> input;
				if (input == 1)
					위치();
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
					감튀2();
					콜라2();
					치즈스틱2();
					SIDEBUY();
				}

			}
			return;
		}
		콜라--;
		system("cls");
		콜라1();
		break;
	case 3:
		if (치즈스틱 == 0) {
			system("cls");
			CRY();
			cout << "처음으로 돌아가시려면 0번,끝내시려면 1번을 눌러주세요" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "원하시는 메뉴를 입력해주세요 ☞";
				cin >> input;
				if (input == 1)
					위치();
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
					감튀2();
					콜라2();
					치즈스틱2();
					SIDEBUY();
				}

			}
			return;
		}
		치즈스틱--;
		system("cls");
		치즈스틱1();
		break;
	}
}
int main() {
	SCREEN();
	int input;
	cout << "원하시는 메뉴를 입력해주세요 ☞";
	cin >> input;
	if (input == 1)
		위치();
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
		감튀2();
		콜라2();
		치즈스틱2();
		SIDEBUY();
	}
}