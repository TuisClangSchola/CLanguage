// Part14 : 列挙型

#include <stdio.h>		// C言語標準のインクルードファイル


// 列挙型の宣言
enum EACTOR { character, enemySpider, enemyDoll, doctor = 10, tree, block, paneru };


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は列挙型についてです。
	*/

	
	// 列挙型は上記の宣言のように記述します。

	// 列挙型の中で宣言された変数名は一番左に「0」が与えられ、右に行くたび加算していくようになります。
	// ですが上記のように「doctor = 10」とすることで「doctor」以降を「10」から加算されるようになります。
	// 上記の列挙内の変数にカーソルを当てれば数値が確認できます。


	// 列挙の生成は以下のようになります。
	EACTOR e_mainActor = EACTOR::character;


	// では、列挙がどういうことに生かせるかといえば以下のものが(私としては)一番良いと思います。
	switch (e_mainActor)
	{
	case EACTOR::character:
		printf("character: %d\n", e_mainActor);
		break;

	case EACTOR::block:
		printf("block: %d\n", e_mainActor);
		break;

	case EACTOR::doctor:
		printf("doctor: %d\n", e_mainActor);
		break;

	case EACTOR::enemyDoll:
		printf("enemyDoll: %d\n", e_mainActor);
		break;

	case EACTOR::enemySpider:
		printf("enemySpider: %d\n", e_mainActor);
		break;

	case EACTOR::paneru:
		printf("paneru: %d\n", e_mainActor);
		break;

	case EACTOR::tree:
		printf("tree: %d\n", e_mainActor);
		break;
	}


	return 0;						// 正常終了確認処理
}




/// おまけ
// C++では以下のようなものも作れます。これはC++14に該当します。使い方は列挙と同じです。
enum class EC_STUDY { C_Part1, C_Part2 };