// Part7�Fswitch��

#include <stdio.h>

int main()
{
	/*
	switch���͂������������Bif�Ɠ����悤�Ȃ��̂����قȂ�B
	*/

	/// �ϐ�A
	int A = 10;

	
	// �R�����g�A�E�g�ɂĐ������Ă����B
	switch (A)
	{
	case 0:			// if(A == 0)�Ɠ���
		printf("A��0�ł���\n");
		break;

	case 10:		// else if(A == 10)�Ɠ���
		printf("A��10�ł���\n");
		break;

	default:		// else�Ɠ���
		printf("��L�̏����𖞂����Ȃ�\n");
		break;
	}

	printf("\n");

	// ��L�Ɣ�r���Ă݂Ă��������B
	switch (A)
	{
	case 0:			// if(A == 0)�Ɠ���
		printf("A��0�ł���\n");

	case 10:		// else if(A == 10)�Ɠ���
		printf("A��10�ł���\n");

	default:		// else�Ɠ���
		printf("��L�̏����𖞂����Ȃ�\n");
		break;
	}


	/* 
	���s���Ă݂�ƕ�����܂����A�ubreak;�v�������Ȃ��Ƃ��̎��̏����������֌W�Ȃ��s���Ă��܂��܂��B
	���ꂪif�ƈقȂ�switch�̓����ł��B
	*/



	return 0;
}