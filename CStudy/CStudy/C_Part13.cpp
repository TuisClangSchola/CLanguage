// Part13 : �\����

#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��
#include <Windows.h>	// Zeromemory�̂��߂����̃C���N���[�h


// --------------------------------------------------
// �^���ϊ��Ȃ��\���̂̐錾
struct SActor
{
	int ID;
	int HP;
	int MP;
};

// �^���ϊ�����\���̂̐錾
typedef struct SStage
{
	int ID;
	int stageHandle;
	bool viewNow;
} s_Stage;

// �^���ϊ���
typedef unsigned __int8 UINT;
// --------------------------------------------------


// �\�����y���邽��
void PrintString(SActor actor)
{
	printf("ID: %d\tHP: %d\tMP: %d\n", actor.ID, actor.HP, actor.MP);
}


// �v���O�����R�[�h�̏o�͑�{
int main()
{
	/*
	����̓��e�͍\���̂ɂ��Ăł��B
	*/


	// �\���̂Ƃ͎�ɂ������̕ϐ�����̉�Ƃ��ď󋵂ɉ����Ă��̖�����ς��邽�߂̂��̂ł��B

	// �\���̂̐���
	SActor s_player;
	SActor s_enemy;

	// ������
	ZeroMemory(&s_player, sizeof(s_player));
	ZeroMemory(&s_enemy, sizeof(s_enemy));

	// �}��
	s_player.HP = 100;
	s_player.ID = 1;
	s_player.MP = 5;

	PrintString(s_player);
	PrintString(s_enemy);


	// �܂��A�^���ϊ��Ƃ���typedef�Ƃ������̂�����܂��B
	// ����͏�̂悤�Ɂuunsigned __int8�v�Ƃ����ϐ����uUINT�v�ɕς��Ă��܂��B

	UINT a;

	return 0;						// ����I���m�F����
}