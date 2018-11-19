// Part12 : 関数


#include <stdio.h>		// C言語標準のインクルードファイル

// ----------------------------------------------------------
// 関数宣言部
/*
返り値を持たない関数
*/
void PrintHelloWorld();

/*
返り値を持つ関数
*/
int ABSum();

/*
返り値を持ち、引数も持つ関数
*/
int ABSum(int a, int b);

/*
返り値を持たず、引数を持ち、処理を途中で終了する関数
*/
void MethodHasReturn(bool flag);

/*
返り値を持たない再帰処理
*/
void RecursiveProcess(int a);

/*
返り値を持つ再帰処理
*/
bool RecursiveProcess(int a[], int search);
// ----------------------------------------------------------



// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は関数についてです。
	*/

	// 関数は返り値を持たない関数と返り値を持つ関数の二種類があります。
	// 厳密に言えばもっとありますが代表的なこの二つに関する説明をします。


	/*
	※注意※
	今回は説明が文字では難しいため雑です。
	まぁコード見て学習してください。
	*/


	/*
	返り値を持たない関数
	これは返り値を持たずただ実行するための関数です。
	*/
	PrintHelloWorld();

	/*
	返り値を持つ関数
	これは関数内で演算した内容を返す関数です。
	*/
	printf("%d\n", ABSum());

	/*
	返り値を持ち、引数も持つ関数
	先ほどの関数のオーバーロードです。
	これは引数によって関数内で行われる演算内容を任意で変更して返す関数です。
	*/
	int m_a = 15, m_b = 20;
	printf("%d\n", ABSum(m_a, m_b));

	/*
	返り値を持たず、引数を持ち、処理を途中で終了する関数
	これは引数に応じて関数内の処理を変更する関数です。
	*/
	MethodHasReturn(false);
	MethodHasReturn(true);

	/*
	返り値を持たない再帰処理
	これは再帰の条件を満たすまで必ず行う関数です。
	*/
	RecursiveProcess(0);

	/*
	返り値を持つ再帰処理
	先ほどの関数のオーバーロードです。
	これは特定のタイミングで再帰を終了する関数です。
	*/
	int m_aA[] = { 0,5,4,3,2,5,1,6,7 };
	printf("%s\n", RecursiveProcess(m_aA, 0) ? "true" : "false");


	return 0;						// 正常終了確認処理
}

/*
返り値を持たない関数
*/
void PrintHelloWorld()
{
	printf("HelloWorld\n");
}


/*
返り値を持つ関数
*/
int ABSum()
{
	int a = 10;
	int b = 5;
	int sum = a + b;

	return sum;
}


/*
返り値を持ち、引数も持つ関数
*/
int ABSum(int a, int b)
{
	int sum = a + b;

	return sum;
}


/*
返り値を持たず、引数を持ち、処理を途中で終了する関数
*/
void MethodHasReturn(bool flag)
{
	if (flag)
	{
		return;
	}

	printf("flagがfalseだった。\n");
}


/*
返り値を持たない再帰処理
*/
void RecursiveProcess(int a)
{
	if (a >= 10)
	{
		return;
	}

	RecursiveProcess(++a);
}



/*
返り値を持つ再帰処理
*/
bool RecursiveProcess(int a[], int search)
{
	if (search >= 10)
	{
		return false;
	}

	if (a[search] == 1)
	{
		return true;
	}

	RecursiveProcess(a, ++search);

	// 通らないけど
	return false;
}