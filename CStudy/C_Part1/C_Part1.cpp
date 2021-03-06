// Part1 : 基本的なコードとコメントアウト



#include <stdio.h>		// C言語標準のインクルードファイル


// プログラムコードの出力大本
int main()
{
	printf("Hello World!\n");		// 出力用関数

	return 0;						// 正常終了確認処理
}




// コメントアウトについて

// スラッシュ２つで一行をコメントアウトする

// コメントアウトによって下の「commentOut」にカーソルを当てるとこの文が表示されます。
int commentOut;

int commentOut2;		// ここに書いてもコメントアウトの文は反映されます。


/*
	スラッシュの間にアスタリスクを入れると
	何行でも
	コメントアウトが
	出来ます。
	そして下の文字に全てが反映される。
*/
int SlashAsterisk;


/// スラッシュ３つもあります。
/// これはXMLドキュメントを生成するものですが基本的に使うことはほぼないです。というか当の私はXML分からないです。

/// <summary> 
/// 名前 
/// </summary> 
/// <param name="hoge">変数名</param> 
/// <returns>備考</returns> 
void test(int hoge);


/// 上の「hoge」にカーソルを当ててみてください。
/// 基本的に引数と呼ばれるものにはコメントアウトを書けませんが、このやり方なら書けます。