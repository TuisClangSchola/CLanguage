// Part5：入力

#include <stdio.h>

int main()
{
	/*
	今まではコード上に数値をじかに打っていましたが今回はコンソール上で入力して出力させます。
	*/

	// int型の場合
	int a;		// 入力された数値の格納用変数

	printf("数値を入力してください：");
	scanf_s("%d", &a);		// scanf_sで入力を行います。「%d」です。

	printf("入力された数値：%d\n", a);

	
	// double型の場合
	double b;		// 入力された数値の格納用変数

	printf("数値を入力してください：");
	scanf_s("%lf", &b);		// doubleの場合は「%lf」です。出力と入力を混合しないようにしましょう。

	printf("入力された数値：%f\n", b);
	

	return 0;
}