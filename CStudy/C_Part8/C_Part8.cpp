// Part8：while/do-while文

#include <stdio.h>


int main()
{
	/*
	while文はループ文です。
	do-while文はwhile文と同じですが少し異なります。
	*/


	// ----------------------------------------------------------------------------------
	// 例えば１〜１０の合計を出したいときに今まででの知識だけでは下のようになりました。
	
	int sumA = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	printf("sumA : %d\n", sumA);


	// ----------------------------------------------------------------------------------
	// ですがwhile文を使えば下のように楽になります。
	
	int i = 1;		// 加算する数値
	int sumB = 0;	// 合計を出す変数
	while (i <= 10)	// iが10以下なら繰り返す
	{
		sumB += i;
		i++;
	}
	printf("sumB : %d\n", sumB);


	/*
	上のようにwhileの「()」の中に繰り返す条件を記述し、「{}」の中にその回数だけ繰り返してほしい内容を記述します。
	*/


	// ----------------------------------------------------------------------------------
	// またdo-whileというものもあります。

	int j = 1;		// 加算する数値
	int sumC = 0;	// 合計を出す変数
	do
	{
		sumC += j;
		j++;
	} while (j <= 10);	// iが10以下なら繰り返す
	printf("sumC : %d\n", sumC);


	/*
	これを実行してみると分かりますが、whileもdo-whileも結果は同じです。

	whileとdo-whileを見比べてみてください。
	do-whileではdoから始まりwhileで終わります。またwhile()の後に「;」を記述しなくてはいけません。

	また、これが大事なのですが”do-whileは必ず一回実行されます。”
	なぜか、コードは基本的に上から下に流れていくということを覚えてください。

	do-whileでは繰り返す条件式は「{}」が実行された後に繰り返すかどうかの判断をします。
	whileでは「{}」の前に繰り返すかどうか判断されます。

	その部分において決定的に違います。
	*/



	// ----------------------------------------------------------------------------------
	// 余談ですが以下のようにきれいに出来ます。
	printf("\n");

	// whileの場合

	int excA = 0;		// 加算する数値
	int sumExcA = 0;	// 合計を出す変数
	while (++excA <= 10)	// iが10以下なら繰り返す
	{
		sumExcA += excA;
	}
	printf("sumExcA : %d\n", sumExcA);

	// do-whileの場合
	
	int excB = 1;
	int sumExcB = 0;
	do
	{
		sumExcB += excB;
	} while (++excB <= 10);
	printf("sumExcB : %d\n", sumExcB);
	


	return 0;
}