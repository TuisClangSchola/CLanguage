// Part9 : for��

#include <stdio.h>


int main()
{
	/*
	for����while���Ɠ��l���[�v�ł��B�܂��قȂ�܂����B
	*/


	// �ȉ��̃R�[�h���Ƃ肠�������Ă��������B�O���while���l�P�`�P�O�̍��v�l���o���܂��B
	
	int sum = 0;			// ���v�l���o���B
	int valueMax = 10;		// �J��Ԃ��ő�l
	for (int i = 1; i <= valueMax; i++)			// valueMax�̒l�ɂȂ�܂ŌJ��Ԃ�
	{
		sum += i;
	}
	printf("sum : %d\n", sum);


	/*
	for���̒��ł͂R�̎����K�v�ł��B
	��ڂ͌J��Ԃ����l�̕ϐ��̐錾�B��ڂ͌J��Ԃ��񐔂̏������B�O�߂͈�ڂɐ錾�������l�̉��Z�����B

	�O�߂͍���ui++�v�Ƃ��܂������uC_Part3�v�ŋ������C���N�������g�ƃf�N�������g�A�O�u�A��u�𗘗p���邱�Ƃł��낢��Əo���܂��B
	*/



	// �]�k�ł����AC++�ɂ����Ă�for���̒����ȉ��̋L�q�̕����������x�����ł��B
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