// Part13 : 構造体

#include <stdio.h>		// C言語標準のインクルードファイル
#include <Windows.h>	// Zeromemoryのためだけのインクルード


// --------------------------------------------------
// 型名変換なし構造体の宣言
struct SActor
{
	int ID;
	int HP;
	int MP;
};

// 型名変換あり構造体の宣言
typedef struct SStage
{
	int ID;
	int stageHandle;
	bool viewNow;
} s_Stage;

// 型名変換例
typedef unsigned __int8 UINT;
// --------------------------------------------------


// 表示を楽するため
void PrintString(SActor actor)
{
	printf("ID: %d\tHP: %d\tMP: %d\n", actor.ID, actor.HP, actor.MP);
}


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は構造体についてです。
	*/


	// 構造体とは主にいくつかの変数を一つの塊として状況に応じてその役割を変えるためのものです。

	// 構造体の生成
	SActor s_player;
	SActor s_enemy;

	// 初期化
	ZeroMemory(&s_player, sizeof(s_player));
	ZeroMemory(&s_enemy, sizeof(s_enemy));

	// 挿入
	s_player.HP = 100;
	s_player.ID = 1;
	s_player.MP = 5;

	PrintString(s_player);
	PrintString(s_enemy);


	// また、型名変換というtypedefというものがあります。
	// これは上のように「unsigned __int8」という変数を「UINT」に変えています。

	UINT a;

	return 0;						// 正常終了確認処理
}