// Part6：if文

#include <stdio.h>

int main()
{
	/*
	if文はいわゆる条件分岐。
	文字だと説明しにくいから実行して確認とコメントアウトでの再確認ということでお願いします。
	*/

	int A = 10;		// 変数A
	int B = 10;		// 変数B
	int C = 20;		// 変数C


	// まず条件のための比較演算子というもの
	if (C >= A)		// CがAと等しいまたは大きいかどうか調べる
	{
		printf("CはAより大きいのでここを通過する\n");
	}

	if (B <= A)		// AがBと等しいまたは大きいかどうか調べる
	{
		printf("AはBより大きくないが等しいのでここを通過する\n");
	}





	return 0;
}