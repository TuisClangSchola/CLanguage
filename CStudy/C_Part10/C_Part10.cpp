// Part10 : 無限ループ / continue / break


#include <stdio.h>		// C言語標準のインクルードファイル


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容では基本的に前回話したforとwhileを多用しますので理解しといてください。
	*/

	/* まず、「continue」
	これはループの処理を途中で終えて次のループ処理に移るための文です。
	以下のコードでは「3」のときだけ処理をせず次のループに移っています。
	*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 3)
		{
			continue;
		}

		printf("continue : %d\n", i);
	}
	printf("continueでのループ終了。\n\n");

	
	// 実行してみればわかると思いますが 3 のときだけその下の処理が行われなかったと思います。
	// このように特定のタイミングだけ飛ばしたいときなどに使います。




	/* 次に「break」
	これはループの処理を途中で終える文です。continueとは違いループから外されます。
	continueと似たようなコードで説明します。
	*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 3)
		{
			break;
		}

		printf("break : %d\n", i);
	}
	printf("breakでのループ終了。\n\n");


	// 実行してみればわかると思いますが 3 のときになったらループ処理が終了しています。
	// このようにループ処理を終了したいときに使います。



	/* 次に「無限ループ」
	これはその名の通り永遠とループをするためのコードです。
	無限ループを行う場合は基本的に「break」は必須となります。
	また、「return」を使っての処理もありますが説明している情報不足のせいで割愛します。またその時が来たら再度説明します。
	*/

	// コメントアウトの状態ですが無限ループのコードは以下のようになります。

	// while (true)
	// {
	// 
	// }

	// for (;;)
	// {
	// 
	// }

	
	// まぁあまり使うことが無いと思うのでそんなものがあるのか程度に考えといてください。



	// 余談ですがcontinueやbreak程度でしたら以下のコードの方が好まれると思います。
	for (int i = 0; i < 10; i++)
	{
		if (i == 3) continue;

		if (i == 8) break;

		printf("余談 : %d\n", i);
	}
	printf("余談ループ終了。\n");



	return 0;						// 正常終了確認処理
}