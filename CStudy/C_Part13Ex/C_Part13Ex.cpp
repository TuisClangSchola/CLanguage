// Part13 : C++�ł̍\����

#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��
#include <Windows.h>	// Zeromemory�̂��߂����ɌĂяo��


// --------------------------------------------------
// �\���̂̐錾
struct SActor
{
private:
	int ID;					// ID
	int HP;					// �̗�
	int power;				// �U����


public:
	// ������
	SActor(int ID, int HP, int power) :ID(ID), HP(HP), power(power) {}


	// ���
	~SActor()
	{
		ZeroMemory(this, sizeof(this));
	}


	// �U�����󂯂���
	void HitDamage(int e_attack)
	{
		// ���񂾂�
		if (HP - e_attack < 0)
		{
			HP = 0;
			printf("%d�����񂾁I\n", ID);
			return;
		}
		// �����U�����󂯂������Ȃ�
		else
		{
			HP -= e_attack;
			printf("�U�����󂯂�\n");
			return;
		}
	}


	// �U����
	int GetPower()
	{
		return power;
	}
};
// --------------------------------------------------


// �v���O�����R�[�h�̏o�͑�{
int main()
{
	/*
	����̓��e�͍\���̂ɂ��Ăł��B
	*/


	// �\���̂ɂ�C��C++�ł̋�ʂ�����AC++�ł̍\���̂��L�q���܂��B
	// �Ƃ����Ă�C++��׋������Ǝv���̂ňӖ��͐������Ȃ��Ă��킩��Ǝv���̂ŃR�[�h�����ڂ���`���Ƃ�܂��B

	SActor s_player(0, 100, 5);
	SActor s_enemy(1, 200, 15);


	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());
	s_player.HitDamage(s_enemy.GetPower());


	return 0;						// ����I���m�F����
}