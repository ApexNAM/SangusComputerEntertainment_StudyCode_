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
/// ���θ޴�
/// </summary>
void SangusMountinDraw();
void PrintHelp();
void SystemDraw();
void DrawToday();

/// <summary>
/// �걸������
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
/// ������
/// </summary>
string codeName = "null";
bool booting = true;

int main()
{
	SangusMountinDraw();
	cout << "������������������������ �걸�� ��ǻ�� �������θ�Ʈ ��������������������������" << endl;
	cout << "DCEOS�� ���Ű� ȯ���մϴ�!\n������ �Է��Ͻø� ��ɾ ã���Ǽ� �ֽ��ϴ�.\n" << endl;

	while (booting)
	{
		textcolor(GREEN, 0);
		cout << "��ɾ �Է����ֽʽÿ�.\n--> ";
		cin >> codeName;

		if (codeName == "����") {
			PrintHelp();
		}
		else if (codeName == "�ý�������") {
			SystemDraw();
		}
		else if (codeName == "�������̾߱�") {
			DrawToday();
		}
		else if (codeName == "����") {
			textcolor(LIGHTCYAN, 0);
			cout << "�ý����� �����մϴ�. �����մϴ�!" << endl;
			cout << "����������������������������������������������������������������������" << endl;

			booting = false;
		}
		else if (codeName == "����") {
			startGame = true;
			SangusPropagandaGame();
		}
		else {
			textcolor(RED, 0);
			cout << "���������������������������������������������������������������" << endl;
			cout << "��ɾ �߸��ǰų� �������� �ʽ��ϴ�." << endl;
			cout << "����������������������������������������������������������������������" << endl;
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
/// ���θ޴�
/// </summary>
void PrintHelp()
{
	textcolor(WHITE, 0);
	cout << "�������������������������������������������򸻦�����������������������������������������" << endl;
	cout << "�ý������� : �ý��� ������ Ȯ���մϴ�." << endl;
	cout << "�������̾߱� : ������ �걸���ҽ��� ���ص帳�ϴ�." << endl;
	cout << "���� : �ش� �ý��ۿ� ����� ������ �����մϴ�." << endl;
	cout << "���� : �ý����� �����մϴ�." << endl;
	cout << "����������������������������������������������������������������������������������������������" << endl;
}

void SystemDraw()
{
	string systemName, districName, otherName;
	textcolor(WHITE, 0);
	cout << "���������������������������������������ý���������������������������������������������" << endl;

	cout << "�ý��� ������ �Է����ֽʽÿ�.\n�̸��� �Է��Ͻʽÿ�.\n--> ";
	cin >> systemName;

	cout << "������ �̸��� �Է��Ͻʽÿ�.\n--> ";
	cin >> districName;

	cout << "�׿ܿ� �ּҸ� �Է��Ͻʽÿ�.\n--> ";
	cin >> otherName;

	cout << "����������������������������������������������������������������������������������������������" << endl;

	if (districName == "�Ϻα�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� �Ϻα��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "���α�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� ���α��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "���α�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� ���α��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "�ߺα�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� �ߺα��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "�ݻ��̱�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� �ݻ��̱��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "���걸��") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� ���걸���� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "���ϱ�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� ���ϱ��� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
	}
	else if (districName == "���ϱ�") {
		cout << systemName << "�� �ݰ����ϴ�." << endl;
		cout << "���ϴ� ���ϱ��� ��ġ�ϰ� �ֽ��ϴ�" << endl;
		cout << "���� �ּҴ� : " << otherName << " �Դϴ�." << endl;
		textcolor(YELLOW, 0);
		cout << "�ش� ������ �������̸� �Ϻ� ���� ������ �ٸ��� �ֽ��ϴ�." << endl;
	}
	else {
		textcolor(RED, 0);
		cout << "�ش� �������� �걸������������ ������ �ƴմϴ�!\n�ٽ� �õ��Ͻʽÿ�." << endl;
	}

	textcolor(WHITE, 0);
	cout << "����������������������������������������������������������������������������������������������" << endl;
}

void DrawToday()
{
	int rnd = rand() % 4;

	textcolor(CYAN, 0);
	cout << "����������������������������������������������������������������������������������������������" << endl;
	cout << "������ �걸�� �ҽ�!" << endl;
	cout << "����������������������������������������������������������������������������������������������" << endl;

	if (rnd == 1) {
		cout << "���� ���� 3��..." << endl;
		cout << "���ϵ��� �ᱹ ���α��� ���� �������߽��ϴ�!" << endl;
		cout << "..�߷�.." << endl;
		cout << "�̿� �걸�������ô� ���α� ħ�� ��� ����" << endl;
		cout << "������ �ϱ� �׸��� �ޱ��� ��� �ý����� �����߽��ϴ�." << endl;
	}
	else if (rnd == 2) {
		cout << "���� ���� 5��..." << endl;
		cout << "�츮 �걸���������� ���Ա��� ���α� ��ø�� ü���߽��ϴ�!" << endl;
		cout << "..�߷�.." << endl;
		cout << "�̿� �걸�������ô� ���α� ��ø�� ��� ����" << endl;
		cout << "CCTV�� ��ȭ�ϰ� �ֽ��ϴ�." << endl;
	}
	else if (rnd == 3) {
		cout << "���� ���� 7��..." << endl;
		cout << "�걸���߾ӹ�ȭ������ �׷��� �߻��߽��ϴ�!" << endl;
		cout << "..�߷�.." << endl;
		cout << "�̿� �걸�������ô� �׷� ��� ����" << endl;
		cout << "�Ϻ� �����ڸ� �ɹ��ϰ� �ֽ��ϴ�." << endl;
	}
	else if (rnd == 4) {
		cout << "���� ���� 3��..." << endl;
		cout << "���α��� ���������� �걸�������ø� ħ���ϰ� �ֽ��ϴ�." << endl;
		cout << "..�߷�.." << endl;
		cout << "�ϱ��� ���� �׸��� �޼����� �Ҽӵ� �������ε���" << endl;
		cout << "��� �����Ͻñ� �ٶ��ϴ�." << endl;
	}
	else if (rnd == 5) {
		cout << "���� ���� 1��..." << endl;
		cout << "�걸�������ð� �׺��߽��ϴ�." << endl;
		cout << "(�˿���)" << endl;
	}

	cout << "����������������������������������������������������������������������������������������������" << endl;
}

// �걸�� ����
void SangusPropagandaGame()
{
	while (startGame)
	{
		textcolor(LIGHTGRAY, 0);
		cout << "�������������������������������������� �걸����Ű�� ���� ��������������������������������������" << endl;
		cout << "�����Ϸ��� y�� �ƴϸ� n�� �Է��ϼ���.\n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y') {
			QuizController();
		}
		else if (yesOrNo == 'n') {
			cout << "������ �����մϴ�!\n�����մϴ�." << endl;
			cout << "����������������������������������������������������������������������������������������������������" << endl;
			startGame = false;
		}
		else {
			cout << "�ٽ� �Է����ּ���." << endl;
		}

	}
}

void QuizController()
{
	int takeHealth = 5;

	cout << "���α��� �걸���� �����ϰ� �ִ�! �⵿ �غ�!!" << endl;
	while (!isGameOver)
	{
		cout << "����������������������������������������������������������������������������������������������������" << endl;
		cout << "���� ü���� : " << health << endl;
		cout << "���� ü���� : " << enemyHealth << endl;

		cout << "\n\ny: ����" << endl;
		cout << "n : ���" << endl;
		cout << "h : ȸ��" << endl;
		cout << "����������������������������������������������������������������������������������������������������" << endl;

		cout << "����? �ƴϸ� ��� �׸��� ȸ��? \n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y')
		{
			cout << "������..." << endl;

			int battle = rand() % 100;

			if (battle < 50) {
				health -= 5;
				cout << "���� ����!" << endl;
			}
			else if (battle > 50) {
				enemyHealth -= 5;
				cout << "���� ����!" << endl;
			}
		}
		else if (yesOrNo == 'n')
		{
			cout << "�����..." << endl;

			int defense = rand() % 100;

			if (defense < 50) {
				health -= 20;
				cout << "��� ����!" << endl;
			}
			else if (defense > 50) {
				enemyHealth -= 10;
				cout << "��� ����!" << endl;
			}
		}
		else if (yesOrNo == 'h')
		{
			if (takeHealth > 0)
			{
				if (health < 100) {
					cout << "����������������������������������������������������������������������������������������������������" << endl;
					cout << "ü���� ȸ��! " << takeHealth << "ȸ ���ҽ��ϴ�.." << endl;

					health += 10;
					takeHealth--;
				}
				else if (health >= 100) {
					cout << "����������������������������������������������������������������������������������������������������" << endl;
					cout << "������ ü���� ����մϴ�.." << endl;
				}
			}
			else if (takeHealth <= 0)
			{
				cout << "����������������������������������������������������������������������������������������������������" << endl;
				cout << "���̻� ü���� ȸ���� ��ȸ�� �����ϴ�..." << endl;
			}
		}


		if (health <= 0)
		{
			health = 0;
			cout << "�й��߽��ϴ�..." << endl;

			takeHealth = 5;
			GameEnd();
		}

		if (enemyHealth <= 0 && health > 0)
		{
			enemyHealth = 0;
			cout << "�걸���� �¸�!" << endl;

			takeHealth = 5;
			GameEnd();
		}
	}
}

void GameEnd()
{
	string nowWhat;
	cout << "�ٽ� �õ��Ϸ��� �ٽýõ��� �Է� �ƴϸ� ���Ḧ �Է��Ͻʽÿ�." << endl;

	cin >> nowWhat;

	if (nowWhat == "����")
		isGameOver = true;
	else if (nowWhat == "�ٽýõ�") {
		health = 100;
		enemyHealth = 100;
	}
}