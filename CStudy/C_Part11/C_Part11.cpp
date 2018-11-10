// Part11 : 配列


#include <stdio.h>		// C言語標準のインクルードファイル
#include <Windows.h>	// 余談にて必要なだけで気にしなくて大丈夫です。


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は配列についてです。配列を説明するうえではポインタの説明が必須なのですが割愛します。
	*/

	// 今までは例えば0~9の数字を持った変数が必要だった場合このように記述しなければならなかったと思います。

	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;
	int g = 6;
	int h = 7;
	int i = 8;
	int j = 9;

	// めちゃくちゃめんどくさくて不毛です。
	// それが配列だと以下のように作ることができます。
	// また、配列の宣言にはいくつか作り方があるので一通り説明します。

	int aa[]{ 0,1,2,3,4,5,6,7,8,9 };		// 配列個数を決めないで配列の中身の個数から決めて生成するもの。

	int ab[10]{ 0,1,2,3,4,5,6,7,8,9 };		// 配列個数を決めつつ中身を決めて生成するもの。

	int ac[10];								// 配列個数を決めて中身を決めず宣言するもの。

	int ad[10]{ 0,1 };						// 配列個数を決めて中身の２つまでだけ決めて生成するもの。


	// 配列というものは基本的に「配列個数」があります。これは「int ac[10];」で言うと１０個となります。
	// そして配列についてここがめんどくさいのですが、基本的に配列の最初は０番です。
	// つまり「int ab[10]{ 0,1,2,3,4,5,6,7,8,9 };」をfor文を使って出力すると以下のようになります。

	for (int temp = 0; temp < 10; temp++)
	{
		printf("配列ab、%d番目の中身%d\n", temp, ab[temp]);
	}
	printf("\n\n");



	// 番号と中身が同じだったため分かりづらい人のために中身を決めた後に表示するようなコードを書きます。

	for (int temp = 0; temp < 10; temp++)
	{
		ac[temp] = 10 * temp;
		printf("配列ac、%d番目の中身%d\n", temp, ac[temp]);
	}
	printf("\n\n");
	

	// また中身を決めていないとこのように適当な中身が割り当てられてしまいます。
	// 正確的にはメモリ上の番号なのですが説明は割愛します。

	int ae[10];
	for (int temp = 0; temp < 10; temp++)
	{
		printf("配列ad、%d番目の中身%d\n", temp, ae[temp]);
	}
	printf("\n\n");




	/*
	二重配列について
	*/

	// 次に二重配列について説明します。
	// 先ほどのものは基本的に一重配列ですが二重というものも作れます。同様に三重など何重でも大抵できるはずですが使う場合がほぼないので割愛します。
	// コードでは以下のようになります。

	int ba[3][5];

	// 図にするとこのようになります。

	/*
			-----------							-------------------------------------------------------
	ba[0][]	|0|1|2|3|4|							| ba[0][0] | ba[0][1] | ba[0][2] | ba[0][3] | ba[0][4]|
			-----------		もう少し細かく		-------------------------------------------------------
	ba[1][]	|0|1|2|3|4|			=>				| ba[1][0] | ba[1][1] | ba[1][2] | ba[1][3] | ba[1][4]|
			-----------							-------------------------------------------------------
	ba[2][]	|0|1|2|3|4|							| ba[2][0] | ba[2][1] | ba[2][2] | ba[2][3] | ba[2][4]|
			-----------							-------------------------------------------------------
	*/

	// 縦が配列の左の番号となり、横が配列の右の番号になります。

	// これを出力するとなるとfor文も以下のように二つ必要になります。
	
	int sum = 0;
	for (int tempA = 0; tempA < 3; tempA++)
	{
		for (int tempB = 0; tempB < 5; tempB++, sum++)
		{
			ba[tempA][tempB] = sum;
			printf("配列ba、[%d][%d]番目%d\t", tempA, tempB, ba[tempA][tempB]);
		}
		printf("\n");
	}
	printf("\n\n");




	// 余談ですが、０またはnullに配列全部を初期化したいときはこれを利用すると楽です。
	// これは<Windows.h>のものなのでわざわざインクルードしました。
	// どんな変数でもどんなクラスでもどんな関数でもできます。
	int ca[10][10];
	ZeroMemory(ca, sizeof(ca));



	return 0;						// 正常終了確認処理
}