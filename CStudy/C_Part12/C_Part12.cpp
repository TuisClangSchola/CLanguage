// Part12 : �֐�


#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��

// ----------------------------------------------------------
// �֐��錾��
/*
�Ԃ�l�������Ȃ��֐�
*/
void PrintHelloWorld();

/*
�Ԃ�l�����֐�
*/
int ABSum();

/*
�Ԃ�l�������A���������֐�
*/
int ABSum(int a, int b);

/*
�Ԃ�l���������A�����������A������r���ŏI������֐�
*/
void MethodHasReturn(bool flag);

/*
�Ԃ�l�������Ȃ��ċA����
*/
void RecursiveProcess(int a);

/*
�Ԃ�l�����ċA����
*/
bool RecursiveProcess(int a[], int search);
// ----------------------------------------------------------



// �v���O�����R�[�h�̏o�͑�{
int main()
{
	/*
	����̓��e�͊֐��ɂ��Ăł��B
	*/

	// �֐��͕Ԃ�l�������Ȃ��֐��ƕԂ�l�����֐��̓��ނ�����܂��B
	// �����Ɍ����΂����Ƃ���܂�����\�I�Ȃ��̓�Ɋւ�����������܂��B


	/*
	�����Ӂ�
	����͐����������ł͓�����ߎG�ł��B
	�܂��R�[�h���Ċw�K���Ă��������B
	*/


	/*
	�Ԃ�l�������Ȃ��֐�
	����͕Ԃ�l���������������s���邽�߂̊֐��ł��B
	*/
	PrintHelloWorld();

	/*
	�Ԃ�l�����֐�
	����͊֐����ŉ��Z�������e��Ԃ��֐��ł��B
	*/
	printf("%d\n", ABSum());

	/*
	�Ԃ�l�������A���������֐�
	��قǂ̊֐��̃I�[�o�[���[�h�ł��B
	����͈����ɂ���Ċ֐����ōs���鉉�Z���e��C�ӂŕύX���ĕԂ��֐��ł��B
	*/
	int m_a = 15, m_b = 20;
	printf("%d\n", ABSum(m_a, m_b));

	/*
	�Ԃ�l���������A�����������A������r���ŏI������֐�
	����͈����ɉ����Ċ֐����̏�����ύX����֐��ł��B
	*/
	MethodHasReturn(false);
	MethodHasReturn(true);

	/*
	�Ԃ�l�������Ȃ��ċA����
	����͍ċA�̏����𖞂����܂ŕK���s���֐��ł��B
	*/
	RecursiveProcess(0);

	/*
	�Ԃ�l�����ċA����
	��قǂ̊֐��̃I�[�o�[���[�h�ł��B
	����͓���̃^�C�~���O�ōċA���I������֐��ł��B
	*/
	int m_aA[] = { 0,5,4,3,2,5,1,6,7 };
	printf("%s\n", RecursiveProcess(m_aA, 0) ? "true" : "false");


	return 0;						// ����I���m�F����
}

/*
�Ԃ�l�������Ȃ��֐�
*/
void PrintHelloWorld()
{
	printf("HelloWorld\n");
}


/*
�Ԃ�l�����֐�
*/
int ABSum()
{
	int a = 10;
	int b = 5;
	int sum = a + b;

	return sum;
}


/*
�Ԃ�l�������A���������֐�
*/
int ABSum(int a, int b)
{
	int sum = a + b;

	return sum;
}


/*
�Ԃ�l���������A�����������A������r���ŏI������֐�
*/
void MethodHasReturn(bool flag)
{
	if (flag)
	{
		return;
	}

	printf("flag��false�������B\n");
}


/*
�Ԃ�l�������Ȃ��ċA����
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
�Ԃ�l�����ċA����
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

	// �ʂ�Ȃ�����
	return false;
}