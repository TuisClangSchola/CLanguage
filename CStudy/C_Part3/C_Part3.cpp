// Part3 : �ϐ�


#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��


// �v���O�����R�[�h�̏o�͑�{
int main()
{
	// �ϐ��Ƃ�������

	/* 
	���́umoji�v�Ƃ����̂��ϐ��B�����āuint�v�Ƃ����̂��ϐ��^(�ւ񂷂�����)
	�uint�v�Ƃ����̂͐����l�������Ă�����̂ł���B
	*/
	int moji;


	// ������g���đO�������uprintf�v�ŉ����ł���ƍl����Ǝv���܂����A�o���܂��B

	// �ł������̂܂܂ł͂ł��܂���B���R�́umoji�v�̒��͍����������Ă��܂���B�Ȃ̂Ő������܂��B

	moji = 10;			// ����Łumoji�v�Ɂu10�v�Ƃ������l������܂����B


	printf("%d\n", moji);		// ����Łumoji�v�̒��ɓ����Ă���u10�v���o�͂���܂��B



	// �l�����Z
	/*
	��قǍ�����ϐ��́umoji�v�Ƃ������O��ς��邾���ł�����ł����܂��B
	�Ƃ������Ƃ́A�����i�[������̂�������ł����܂��B
	�܂肱�̃R�[�h��Ōv�Z�������邱�Ƃ��ł��܂��B
	*/
	int A;			// ���Z�̍s���ϐ��P
	int B;			// ���Z�̍s���ϐ��Q
	int answer;		// ���Z����
	
	A = 5;			// A�ɐ��l������
	B = 10;			// B�ɐ��l������

	// �����Z�u+�v
	answer = A + B;
	printf("�����Z�F%d + %d = %d\n", A, B, answer);

	// �����Z�u-�v
	answer = A - B;
	printf("�����Z�F%d - %d = %d\n", A, B, answer);

	// �|���Z�u*�v
	answer = A * B;
	printf("�|���Z�F%d * %d = %d\n", A, B, answer);

	// ����Z�u/�v�i�����o�́j
	answer = A / B;
	printf("����Z�F%d / %d = %d\n", A, B, answer);

	// ��]�Z�u%�v�i�]����o�́j
	answer = A % B;
	printf("��]�Z�F%d %% %d = %d\n", A, B, answer);
	

	/*
	�uanswer�v���g���܂킵�Ă��܂������g��ς���̂͏�ɂł��܂��B�i��X�o�܂����o���Ȃ����̂�����܂��B�j
	*/


	// �P���v�Z�̏�������
	/*
	���l���P���ȏ㑝�₵�����A�܂��͂Q���ȏ㑝�₵�����Ƃ������ꍇ�A�ȒP�ɋL�q�ł��܂��B
	*/
	int test = 10;		// ����10

	test = test + 1;	// ����11

	test++;				// ����12

	test += 2;			// ����14


	// �ȉ��C���N�������g�ƃf�N�������g�̏ڂ�������

	int highTest = 10;		// ����10

	highTest++;				// ����11

	++highTest;				// ����12

	if (++highTest >= 13)	// ����13
	{
		printf("�ʂ�܂��B\n");
	}

	if (highTest++ >= 14)	// ����13(if�̒��ׂ����++���s����)
	{
		printf("�ʂ�܂���B\n");
	}
	else
	{
		printf("���č������ł��傤�B�F%d\n", highTest);	// ����14
	}

	highTest--;				// ����13

	--highTest;				// ����12

	if (--highTest <= 11)	// ����11
	{
		printf("�ʂ�܂��B\n");
	}

	if (highTest-- <= 10)	// ����11(if�̒��ׂ����++���s����)
	{
		printf("�ʂ�܂���B\n");
	}
	else
	{
		printf("���č������ł��傤�B�F%d\n", highTest);	// ����10
	}
	

	return 0;						// ����I���m�F����
}