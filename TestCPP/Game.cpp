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
/// 詭檣詭景
/// </summary>
void SangusMountinDraw();
void PrintHelp();
void SystemDraw();
void DrawToday();

/// <summary>
/// 骯掘蝶啪歜
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
/// 滲熱菟
/// </summary>
string codeName = "null";
bool booting = true;

int main()
{
	SangusMountinDraw();
	cout << "式式式式式式式式式式式式 骯掘蝶 闡У攪 縛攪纔檣試お 式式式式式式式式式式式式式" << endl;
	cout << "DCEOS縑 螃褐勘 �紊腎桭炴�!\n紫遺擊 殮溘ж衛賊 貲滄橫蒂 瓊戲褒熱 氈蝗棲棻.\n" << endl;

	while (booting)
	{
		textcolor(GREEN, 0);
		cout << "貲滄橫蒂 殮溘п輿褊衛螃.\n--> ";
		cin >> codeName;

		if (codeName == "紫遺") {
			PrintHelp();
		}
		else if (codeName == "衛蝶蠱薑爾") {
			SystemDraw();
		}
		else if (codeName == "螃棺曖檜撿晦") {
			DrawToday();
		}
		else if (codeName == "謙猿") {
			textcolor(LIGHTCYAN, 0);
			cout << "衛蝶蠱擊 謙猿м棲棻. 馬餌м棲棻!" << endl;
			cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;

			booting = false;
		}
		else if (codeName == "啪歜") {
			startGame = true;
			SangusPropagandaGame();
		}
		else {
			textcolor(RED, 0);
			cout << "式式式式式式式式式式式式式式式式唳堅式式式式式式式式式式式式式式式" << endl;
			cout << "貲滄橫陛 澀跤腎剪釭 襄營ж雖 彊蝗棲棻." << endl;
			cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
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
/// 詭檣詭景
/// </summary>
void PrintHelp()
{
	textcolor(WHITE, 0);
	cout << "式式式式式式式式式式式式式式式式式式式式紫遺蜓式式式式式式式式式式式式式式式式式式式式式" << endl;
	cout << "衛蝶蠱薑爾 : 衛蝶蠱 薑爾蒂 �挫恉桭炴�." << endl;
	cout << "螃棺曖檜撿晦 : 螃棺曖 骯掘蝶模衝擊 瞪п萄董棲棻." << endl;
	cout << "啪歜 : п渡 衛蝶蠱縑 頂濰脹 啪歜擊 褒чм棲棻." << endl;
	cout << "謙猿 : 衛蝶蠱擊 謙猿м棲棻." << endl;
	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
}

void SystemDraw()
{
	string systemName, districName, otherName;
	textcolor(WHITE, 0);
	cout << "式式式式式式式式式式式式式式式式式式式衛蝶蠱薑爾式式式式式式式式式式式式式式式式式式式" << endl;

	cout << "衛蝶蠱 薑爾蒂 殮溘п輿褊衛螃.\n檜葷擊 殮溘ж褊衛螃.\n--> ";
	cin >> systemName;

	cout << "雖羲掘 檜葷擊 殮溘ж褊衛螃.\n--> ";
	cin >> districName;

	cout << "斜諼縑 輿模蒂 殮溘ж褊衛螃.\n--> ";
	cin >> otherName;

	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;

	if (districName == "磁睡掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 磁睡掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "憮睡掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 憮睡掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "翕睡掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 翕睡掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "醞睡掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 醞睡掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "奩餌檜掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 奩餌檜掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "掘骯掘蝶") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 掘骯掘蝶縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "陴磁掘") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 陴磁掘縑 嬪纂ж堅 氈蝗棲棻." << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
	}
	else if (districName == "憮磁捱") {
		cout << systemName << "椒 奩骨蝗棲棻." << endl;
		cout << "敝ж朝 憮磁捱縑 嬪纂ж堅 氈蝗棲棻" << endl;
		cout << "撮睡 輿模朝 : " << otherName << " 殮棲棻." << endl;
		textcolor(YELLOW, 0);
		cout << "п渡 雖羲擎 雖羲捱檜貊 橾睡 憮綠蝶 薯奢檜 棻蒂熱 氈蝗棲棻." << endl;
	}
	else {
		textcolor(RED, 0);
		cout << "п渡 雖羲掘朝 骯掘蝶蝶惜羲衛曖 婦й檜 嬴椎棲棻!\n棻衛 衛紫ж褊衛螃." << endl;
	}

	textcolor(WHITE, 0);
	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
}

void DrawToday()
{
	int rnd = rand() % 4;

	textcolor(CYAN, 0);
	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
	cout << "螃棺曖 骯掘蝶 模衝!" << endl;
	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;

	if (rnd == 1) {
		cout << "螃棺 螃�� 3衛..." << endl;
		cout << "翕磁紫陛 唸措 薑睡捱縑 曖п 鱔薯渡ц蝗棲棻!" << endl;
		cout << "..醞楞.." << endl;
		cout << "檜縑 骯掘蝶惜羲衛朝 薑睡捱 藹奢 渠綠蒂 嬪п" << endl;
		cout << "翕掘諦 磁掘 斜葬堅 殖捱縑 寞橫 衛蝶蠱擊 掘蹴ц蝗棲棻." << endl;
	}
	else if (rnd == 2) {
		cout << "螃棺 螃�� 5衛..." << endl;
		cout << "辦葬 骯掘蝶惜羲衛曖 薑敘捱檜 薑睡捱 除繪擊 羹んц蝗棲棻!" << endl;
		cout << "..醞楞.." << endl;
		cout << "檜縑 骯掘蝶惜羲衛朝 薑睡捱 除繪擊 渠綠蒂 嬪п" << endl;
		cout << "CCTV蒂 鬼�倆炾� 氈蝗棲棻." << endl;
	}
	else if (rnd == 3) {
		cout << "螃棺 螃�� 7衛..." << endl;
		cout << "骯掘蝶醞懈寥�俯▼□� 纔楝陛 嫦儅ц蝗棲棻!" << endl;
		cout << "..醞楞.." << endl;
		cout << "檜縑 骯掘蝶惜羲衛朝 纔楝 渠綠蒂 嬪п" << endl;
		cout << "橾睡 辨曖濠蒂 褕僥ж堅 氈蝗棲棻." << endl;
	}
	else if (rnd == 4) {
		cout << "螃棺 螃瞪 3衛..." << endl;
		cout << "薑睡捱檜 獄問瞳戲煎 骯掘蝶惜羲衛蒂 藹奢ж堅 氈蝗棲棻." << endl;
		cout << "..醞楞.." << endl;
		cout << "磁掘諦 翕掘 斜葬堅 殖撩捱縑 模樓脹 雖羲掘團菟擎" << endl;
		cout << "闊衛 渠Яж衛晦 夥奧棲棻." << endl;
	}
	else if (rnd == 5) {
		cout << "螃棺 螃�� 1衛..." << endl;
		cout << "骯掘蝶惜羲衛陛 о犒ц蝗棲棻." << endl;
		cout << "(匐翮脾)" << endl;
	}

	cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
}

// 骯掘蝶 啪歜
void SangusPropagandaGame()
{
	while (startGame)
	{
		textcolor(LIGHTGRAY, 0);
		cout << "式式式式式式式式式式式式式式式式式式式 骯掘蝶雖酈晦 啪歜 式式式式式式式式式式式式式式式式式式式" << endl;
		cout << "衛濛ж溥賊 y蒂 嬴棲賊 n擊 殮溘ж撮蹂.\n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y') {
			QuizController();
		}
		else if (yesOrNo == 'n') {
			cout << "啪歜擊 謙猿м棲棻!\n馬餌м棲棻." << endl;
			cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
			startGame = false;
		}
		else {
			cout << "棻衛 殮溘п輿撮蹂." << endl;
		}

	}
}

void QuizController()
{
	int takeHealth = 5;

	cout << "薑睡捱檜 骯掘蝶蒂 奢問ж堅 氈棻! 轎翕 遽綠!!" << endl;
	while (!isGameOver)
	{
		cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
		cout << "⑷營 羹溘擎 : " << health << endl;
		cout << "瞳曖 羹溘擎 : " << enemyHealth << endl;

		cout << "\n\ny: 奢問" << endl;
		cout << "n : 寞橫" << endl;
		cout << "h : �蛹�" << endl;
		cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;

		cout << "奢問? 嬴棲賊 寞橫 斜葬堅 �蛹�? \n--> ";
		cin >> yesOrNo;

		if (yesOrNo == 'y')
		{
			cout << "奢問醞..." << endl;

			int battle = rand() % 100;

			if (battle < 50) {
				health -= 5;
				cout << "奢問 褒ぬ!" << endl;
			}
			else if (battle > 50) {
				enemyHealth -= 5;
				cout << "奢問 撩奢!" << endl;
			}
		}
		else if (yesOrNo == 'n')
		{
			cout << "寞橫醞..." << endl;

			int defense = rand() % 100;

			if (defense < 50) {
				health -= 20;
				cout << "寞橫 褒ぬ!" << endl;
			}
			else if (defense > 50) {
				enemyHealth -= 10;
				cout << "寞橫 撩奢!" << endl;
			}
		}
		else if (yesOrNo == 'h')
		{
			if (takeHealth > 0)
			{
				if (health < 100) {
					cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
					cout << "羹溘擊 �蛹�! " << takeHealth << "�� 陴懊蝗棲棻.." << endl;

					health += 10;
					takeHealth--;
				}
				else if (health >= 100) {
					cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
					cout << "雖旎擎 羹溘檜 醱碟м棲棻.." << endl;
				}
			}
			else if (takeHealth <= 0)
			{
				cout << "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式" << endl;
				cout << "渦檜鼻 羹溘擊 �蛹嘎� 晦�萼� 橈蝗棲棻..." << endl;
			}
		}


		if (health <= 0)
		{
			health = 0;
			cout << "ぬ寡ц蝗棲棻..." << endl;

			takeHealth = 5;
			GameEnd();
		}

		if (enemyHealth <= 0 && health > 0)
		{
			enemyHealth = 0;
			cout << "骯掘蝶曖 蝓葬!" << endl;

			takeHealth = 5;
			GameEnd();
		}
	}
}

void GameEnd()
{
	string nowWhat;
	cout << "棻衛 衛紫ж溥賊 棻衛衛紫蒂 殮溘 嬴棲賊 謙猿蒂 殮溘ж褊衛螃." << endl;

	cin >> nowWhat;

	if (nowWhat == "謙猿")
		isGameOver = true;
	else if (nowWhat == "棻衛衛紫") {
		health = 100;
		enemyHealth = 100;
	}
}