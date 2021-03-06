// Part4：変数の種類


#include <stdio.h>
#include <limits>
#include <float.h>

int main()
{
	/*
	変数はいくらでもありますが主要なものだけ出します。
	*/

	int		a = 0;			// これは整数値のみを格納します。
	bool	b = false;		// これは0/1のみを格納します。
	char	c = '\0';		// これは文字のみを格納します。
	double	d = 0.0;		// これは小数点を含む数値を格納します。
	float	e = 0.0f;		// これはdoubleより少ない数値を格納します。


	// floatでも書きましたがそれぞれには容量の制限があります。

	printf("int型最大値：%d\nint型最小値：%d\n\n", INT_MAX, INT_MIN);
	printf("bool型最大値：%d\nbool型最小値：%d\n\n", 1, 0);
	printf("char型最大値：%d\nchar型最小値：%d\n\n", CHAR_MAX, CHAR_MIN);
	printf("double型最大値：%g\ndouble型最小値：%g\n\n", DBL_MAX, DBL_MIN);
	printf("float型最大値：%g\nfloat型最小値：%g\n\n", FLT_MAX, FLT_MIN);


	return 0;
}
