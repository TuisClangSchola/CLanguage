// Part15 : extern

#include <stdio.h>		// C言語標準のインクルードファイル
#include "C_Part15.h"	// C_Part15を呼び起こす

// プログラムコードの出力大本
int main()
{
	/*
	今回の内容はexternについてです。
	*/

	// externを利用する。
	printf("今のステージ: %d\n", stageNumber);


	
	// extern変数はどういったものかというとヘッダーでexternとして宣言してcppにて生成を行えば
	// どこでもその変数が利用できるといったものです。

	// このプロジェクト内のcppとヘッダーはexternの使い方を理解するのに最低限必要な者たちです。

	return 0;						// 正常終了確認処理
}