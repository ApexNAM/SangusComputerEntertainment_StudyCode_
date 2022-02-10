#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 

#include <iostream>
#include <Windows.h>

using namespace std;

void textcolor(int foreground, int background);

/// <summary>
/// 메인메뉴
/// </summary>
void SangusMountinDraw();
void PrintHelp();
void SystemDraw();
void DrawToday();

/// <summary>
/// 산구스게임
/// </summary>
void SangusPropagandaGame();
void QuizController();
void GameEnd();

char yesOrNo;

bool startGame = false;
bool isGameOver = false;

int health = 100;
int enemyHealth = 100;



/// <summary>
/// 변수들
/// </summary>
string codeName = "null";
bool booting = true;

int main()
{
	SangusMountinDraw();
	cout << "──────────── 산구스 컴퓨터 엔터테인먼트 ─────────────" << endl;
	cout << "DCEOS에 오신걸 환영합니다!\n도움을 입력하시면 명령어를 찾으실수 있습니다.\n" << endl;

	while (booting)
	{
		textcolor(GREEN, 0);
		cout << "명령어를 입력해주십시오.\n--> ";
		cin >> codeName;

		if (codeName == "도움") {
			PrintHelp();
		}
		else if (codeName == "시스템정보") {
			SystemDraw();
		}
		else if (codeName == "오늘의이야기") {
			DrawToday();
		}
		else if (codeName == "종료") {
			textcolor(LIGHTCYAN, 0);
			cout << "시스템을 종료합니다. 감사합니다!" << endl;
			cout << "───────────────────────────────────" << endl;

			booting = false;
		}
		else if (codeName == "게임") {
			startGame = true;
			SangusPropagandaGame();
		}
		else {
			textcolor(RED, 0);
			cout << "────────────────경고───────────────" << endl;
			cout << "명령어가 잘못되거나 존재하지 않습니다." << endl;
			cout << "───────────────────────────────────" << endl;
		}
	}

	return 0;
}

void SangusMountinDraw()
{
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 19; j >= i; j--)
			cout << " ";

		for (int j = 1; j <= i * 2 - 1; j++)
		{
			textcolor(LIGHTGREEN, 0);
			cout << "@";
		}


		for (int j = 10; j >= 1; j--)
		{
			textcolor(GREEN, 0);
			cout << "@";
		}
		cout << "\n";
	}
}

void textcolor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/// <summary>
/// 메인메뉴
/// </summary>
void PrintHelp()
{
	textcolor(WHITE, 0);
	cout << "────────────────────도움말─────────────────────" << endl;
	cout << "시스템정보 : 시스템 정보를 확인합니다." << endl;
	cout << "오늘의이야기 : 오늘의 산구스소식을 전해드립니다." << endl;
	cout << "게임 : 해당 시스템에 내장된 게임을 실행합니다." << endl;
	cout << "종료 : 시스템을 종료합니다." << endl;
	cout << "───────────────────────────────────────────────" << endl;
}

void SystemDraw()
{
	string systemName, districName, otherName;
	textcolor(WHITE, 0);
	cout << "───────────────────시스템정보───────────────────" << endl;

	cout << "시스템 정보를 입력해주십시오.\n이름을 입력하십시오.\n--> ";
	cin >> systemName;

	cout << "지역구 이름을 입력하십시오.\n--> ";
	cin >> districName;

	cout << "그외에 주소를 입력하십시오.\n--> ";
	cin >> otherName;

	cout << "───────────────────────────────────────────────" << endl;

	if (districName == "북부구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 북부구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "서부구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 서부구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "동부구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 동부구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "중부구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 중부구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "반사이구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 반사이구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "구산구스") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 구산구스에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "남북구") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 남북구에 위치하고 있습니다." << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
	}
	else if (districName == "서북군") {
		cout << systemName << "님 반갑습니다." << endl;
		cout << "귀하는 서북군에 위치하고 있습니다" << endl;
		cout << "세부 주소는 : " << otherName << " 입니다." << endl;
		textcolor(YELLOW, 0);
		cout << "해당 지역은 지역군이며 일부 서비스 제공이 다를수 있습니다." << endl;
	}
	else {
		textcolor(RED, 0);
		cout << "해당 지역구는 산구스스광역시의 관할이 아닙니다!\n다시 시도하십시오." << endl;
	}

	textcolor(WHITE, 0);
	cout << "───────────────────────────────────────────────" << endl;
}

void DrawToday()
{
	int rnd = rand() % 4;

	textcolor(CYAN, 0);
	cout << "───────────────────────────────────────────────" << endl;
	cout << "오늘의 산구스 소식!" << endl;
	cout << "───────────────────────────────────────────────" << endl;

	if (rnd == 1) {
		cout << "오늘 오후 3시..." << endl;
		cout << "동북도가 결국 정부군에 의해 통제당했습니다!" << endl;
		cout << "..중략.." << endl;
		cout << "이에 산구스광역시는 정부군 침공 대비를 위해" << endl;
		cout << "동구와 북구 그리고 달군에 방어 시스템을 구축했습니다." << endl;
	}
	else if (rnd == 2) {
		cout << "오늘 오후 5시..." << endl;
		cout << "우리 산구스광역시의 정규군이 정부군 간첩을 체포했습니다!" << endl;
		cout << "..중략.." << endl;
		cout << "이에 산구스광역시는 정부군 간첩을 대비를 위해" << endl;
		cout << "CCTV를 강화하고 있습니다." << endl;
	}
	else if (rnd == 3) {
		cout << "오늘 오후 7시..." << endl;
		cout << "산구스중앙백화점에서 테러가 발생했습니다!" << endl;
		cout << "..중략.." << endl;
		cout << "이에 산구스광역시는 테러 대비를 위해" << endl;
		cout << "일부 용의자를 심문하고 있습니다." << endl;
	}
	else if (rnd == 4) {
		cout << "오늘 오전 3시..." << endl;
		cout << "정부군이 본격적으로 산구스광역시를 침공하고 있습니다." << endl;
		cout << "..중략.." << endl;
		cout << "북구와 동구 그리고 달성군에 소속된 지역구민들은" << endl;
		cout << "즉시 대피하시기 바랍니다." << endl;
	}
	else if (rnd == 5) {
		cout << "오늘 오후 1시..." << endl;
		cout << "산구스광역시가 항복했습니다." << endl;
		cout << "(검열됨)" << endl;
	}

	cout << "───────────────────────────────────────────────" << endl;
}

// 산구스 게임
void SangusPropagandaGame()
{
	while (startGame)
	{
		textcolor(LIGHTGRAY, 0);
		cout << "─────────────────── 산구스지키기 게임 ───────────────────" << endl;
		cout << "시작하려면 y를 아니면 n을 입력하세요.\n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y') {
			QuizController();
		}
		else if (yesOrNo == 'n') {
			cout << "게임을 종료합니다!\n감사합니다." << endl;
			cout << "──────────────────────────────────────────────────" << endl;
			startGame = false;
		}
		else {
			cout << "다시 입력해주세요." << endl;
		}

	}
}

void QuizController()
{
	int takeHealth = 5;

	cout << "정부군이 산구스를 공격하고 있다! 출동 준비!!" << endl;
	while (!isGameOver)
	{
		cout << "──────────────────────────────────────────────────" << endl;
		cout << "현재 체력은 : " << health << endl;
		cout << "적의 체력은 : " << enemyHealth << endl;

		cout << "\n\ny: 공격" << endl;
		cout << "n : 방어" << endl;
		cout << "h : 회복" << endl;
		cout << "──────────────────────────────────────────────────" << endl;

		cout << "공격? 아니면 방어 그리고 회복? \n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y')
		{
			cout << "공격중..." << endl;

			int battle = rand() % 100;

			if (battle < 50) {
				health -= 5;
				cout << "공격 실패!" << endl;
			}
			else if (battle > 50) {
				enemyHealth -= 5;
				cout << "공격 성공!" << endl;
			}
		}
		else if (yesOrNo == 'n')
		{
			cout << "방어중..." << endl;

			int defense = rand() % 100;

			if (defense < 50) {
				health -= 20;
				cout << "방어 실패!" << endl;
			}
			else if (defense > 50) {
				enemyHealth -= 10;
				cout << "방어 성공!" << endl;
			}
		}
		else if (yesOrNo == 'h')
		{
			if (takeHealth > 0)
			{
				if (health < 100) {
					cout << "──────────────────────────────────────────────────" << endl;
					cout << "체력을 회복! " << takeHealth << "회 남았습니다.." << endl;

					health += 10;
					takeHealth--;
				}
				else if (health >= 100) {
					cout << "──────────────────────────────────────────────────" << endl;
					cout << "지금은 체력이 충분합니다.." << endl;
				}
			}
			else if (takeHealth <= 0)
			{
				cout << "──────────────────────────────────────────────────" << endl;
				cout << "더이상 체력을 회복할 기회가 없습니다..." << endl;
			}
		}


		if (health <= 0)
		{
			health = 0;
			cout << "패배했습니다..." << endl;

			takeHealth = 5;
			GameEnd();
		}

		if (enemyHealth <= 0 && health > 0)
		{
			enemyHealth = 0;
			cout << "산구스의 승리!" << endl;

			takeHealth = 5;
			GameEnd();
		}
	}
}

void GameEnd()
{
	string nowWhat;
	cout << "다시 시도하려면 다시시도를 입력 아니면 종료를 입력하십시오." << endl;

	cin >> nowWhat;

	if (nowWhat == "종료")
		isGameOver = true;
	else if (nowWhat == "다시시도") {
		health = 100;
		enemyHealth = 100;
	}
}