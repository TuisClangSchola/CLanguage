// Part11 : �z��


#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��
#include <Windows.h>	// �]�k�ɂĕK�v�Ȃ����ŋC�ɂ��Ȃ��đ��v�ł��B


// �v���O�����R�[�h�̏o�͑�{
int main()
{
	/*
	����̓��e�͔z��ɂ��Ăł��B�z���������邤���ł̓|�C���^�̐������K�{�Ȃ̂ł����������܂��B
	*/

	// ���܂ł͗Ⴆ��0~9�̐������������ϐ����K�v�������ꍇ���̂悤�ɋL�q���Ȃ���΂Ȃ�Ȃ������Ǝv���܂��B

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

	// �߂��Ⴍ����߂�ǂ������ĕs�тł��B
	// ���ꂪ�z�񂾂ƈȉ��̂悤�ɍ�邱�Ƃ��ł��܂��B
	// �܂��A�z��̐錾�ɂ͂���������������̂ň�ʂ�������܂��B

	int aa[]{ 0,1,2,3,4,5,6,7,8,9 };		// �z��������߂Ȃ��Ŕz��̒��g�̌����猈�߂Đ���������́B

	int ab[10]{ 0,1,2,3,4,5,6,7,8,9 };		// �z��������߂��g�����߂Đ���������́B

	int ac[10];								// �z��������߂Ē��g�����߂��錾������́B

	int ad[10]{ 0,1 };						// �z��������߂Ē��g�̂Q�܂ł������߂Đ���������́B


	// �z��Ƃ������̂͊�{�I�Ɂu�z����v������܂��B����́uint ac[10];�v�Ō����ƂP�O�ƂȂ�܂��B
	// �����Ĕz��ɂ��Ă������߂�ǂ������̂ł����A��{�I�ɔz��̍ŏ��͂O�Ԃł��B
	// �܂�uint ab[10]{ 0,1,2,3,4,5,6,7,8,9 };�v��for�����g���ďo�͂���ƈȉ��̂悤�ɂȂ�܂��B

	for (int temp = 0; temp < 10; temp++)
	{
		printf("�z��ab�A%d�Ԗڂ̒��g%d\n", temp, ab[temp]);
	}
	printf("\n\n");



	// �ԍ��ƒ��g���������������ߕ�����Â炢�l�̂��߂ɒ��g�����߂���ɕ\������悤�ȃR�[�h�������܂��B

	for (int temp = 0; temp < 10; temp++)
	{
		ac[temp] = 10 * temp;
		printf("�z��ac�A%d�Ԗڂ̒��g%d\n", temp, ac[temp]);
	}
	printf("\n\n");
	

	// �܂����g�����߂Ă��Ȃ��Ƃ��̂悤�ɓK���Ȓ��g�����蓖�Ă��Ă��܂��܂��B
	// ���m�I�ɂ̓�������̔ԍ��Ȃ̂ł��������͊������܂��B

	int ae[10];
	for (int temp = 0; temp < 10; temp++)
	{
		printf("�z��ad�A%d�Ԗڂ̒��g%d\n", temp, ae[temp]);
	}
	printf("\n\n");




	/*
	��d�z��ɂ���
	*/

	// ���ɓ�d�z��ɂ��Đ������܂��B
	// ��قǂ̂��̂͊�{�I�Ɉ�d�z��ł�����d�Ƃ������̂����܂��B���l�ɎO�d�Ȃǉ��d�ł����ł���͂��ł����g���ꍇ���قڂȂ��̂Ŋ������܂��B
	// �R�[�h�ł͈ȉ��̂悤�ɂȂ�܂��B

	int ba[3][5];

	// �}�ɂ���Ƃ��̂悤�ɂȂ�܂��B

	/*
			-----------							-------------------------------------------------------
	ba[0][]	|0|1|2|3|4|							| ba[0][0] | ba[0][1] | ba[0][2] | ba[0][3] | ba[0][4]|
			-----------		���������ׂ���		-------------------------------------------------------
	ba[1][]	|0|1|2|3|4|			=>				| ba[1][0] | ba[1][1] | ba[1][2] | ba[1][3] | ba[1][4]|
			-----------							-------------------------------------------------------
	ba[2][]	|0|1|2|3|4|							| ba[2][0] | ba[2][1] | ba[2][2] | ba[2][3] | ba[2][4]|
			-----------							-------------------------------------------------------
	*/

	// �c���z��̍��̔ԍ��ƂȂ�A�����z��̉E�̔ԍ��ɂȂ�܂��B

	// ������o�͂���ƂȂ��for�����ȉ��̂悤�ɓ�K�v�ɂȂ�܂��B
	
	int sum = 0;
	for (int tempA = 0; tempA < 3; tempA++)
	{
		for (int tempB = 0; tempB < 5; tempB++, sum++)
		{
			ba[tempA][tempB] = sum;
			printf("�z��ba�A[%d][%d]�Ԗ�%d\t", tempA, tempB, ba[tempA][tempB]);
		}
		printf("\n");
	}
	printf("\n\n");




	// �]�k�ł����A�O�܂���null�ɔz��S�����������������Ƃ��͂���𗘗p����Ɗy�ł��B
	// �����<Windows.h>�̂��̂Ȃ̂ł킴�킴�C���N���[�h���܂����B
	// �ǂ�ȕϐ��ł��ǂ�ȃN���X�ł��ǂ�Ȋ֐��ł��ǂ�ȍ\���̂ł��ł��܂��B
	int ca[10][10];
	ZeroMemory(ca, sizeof(ca));



	return 0;						// ����I���m�F����
}