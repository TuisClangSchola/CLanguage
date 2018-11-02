// Part9 : for文

#include <stdio.h>


int main()
{
	/*
	for文はwhile文と同様ループです。まぁ異なりますが。
	*/


	// 以下のコードをとりあえず見てください。前回のwhile同様１～１０の合計値を出します。
	
	int sum = 0;			// 合計値を出す。
	int valueMax = 10;		// 繰り返す最大値
	for (int i = 1; i <= valueMax; i++)			// valueMaxの値になるまで繰り返す
	{
		sum += i;
	}
	printf("sum : %d\n", sum);


	/*
	for文の中では３つの式が必要です。
	一つ目は繰り返す数値の変数の宣言。二つ目は繰り返す回数の条件式。三つめは一つ目に宣言した数値の加算方向。

	三つめは今回「i++」としましたが「C_Part3」で教えたインクリメントとデクリメント、前置、後置を利用することでいろいろと出来ます。
	*/



	// 余談ですが、C++においてはfor文の中を以下の記述の方が処理速度速いです。
	printf("\n");

	int sumA = 0;
	int valueMaxA = 11;
	for (int i = 1, n = valueMaxA; i != n; ++i)
	{
		sumA += i;
	}
	printf("sumA : %d\n", sumA);


	return 0;
}