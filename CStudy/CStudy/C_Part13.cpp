// Part13 : 構造体

#include <stdio.h>		// C言語標準のインクルードファイル


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


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は構造体についてです。
	*/


	// 構造体とは主にいくつかの変数を一つの塊として状況に応じてその役割を変えるためのものです。




	return 0;						// 正常終了確認処理
}