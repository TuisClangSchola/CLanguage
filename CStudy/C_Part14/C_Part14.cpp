// Part14 : �񋓌^

#include <stdio.h>		// C����W���̃C���N���[�h�t�@�C��


// �񋓌^�̐錾
enum EACTOR { character, enemySpider, enemyDoll, doctor = 10, tree, block, paneru };


// �v���O�����R�[�h�̏o�͑�{
int main()
{
	/*
	����̓��e�͗񋓌^�ɂ��Ăł��B
	*/

	
	// �񋓌^�͏�L�̐錾�̂悤�ɋL�q���܂��B

	// �񋓌^�̒��Ő錾���ꂽ�ϐ����͈�ԍ��Ɂu0�v���^�����A�E�ɍs�����щ��Z���Ă����悤�ɂȂ�܂��B
	// �ł�����L�̂悤�Ɂudoctor = 10�v�Ƃ��邱�ƂŁudoctor�v�ȍ~���u10�v������Z�����悤�ɂȂ�܂��B
	// ��L�̗񋓓��̕ϐ��ɃJ�[�\���𓖂Ă�ΐ��l���m�F�ł��܂��B


	// �񋓂̐����͈ȉ��̂悤�ɂȂ�܂��B
	EACTOR e_mainActor = EACTOR::character;


	// �ł́A�񋓂��ǂ��������Ƃɐ������邩�Ƃ����Έȉ��̂��̂�(���Ƃ��Ă�)��ԗǂ��Ǝv���܂��B
	switch (e_mainActor)
	{
	case EACTOR::character:
		printf("character: %d\n", e_mainActor);
		break;

	case EACTOR::block:
		printf("block: %d\n", e_mainActor);
		break;

	case EACTOR::doctor:
		printf("doctor: %d\n", e_mainActor);
		break;

	case EACTOR::enemyDoll:
		printf("enemyDoll: %d\n", e_mainActor);
		break;

	case EACTOR::enemySpider:
		printf("enemySpider: %d\n", e_mainActor);
		break;

	case EACTOR::paneru:
		printf("paneru: %d\n", e_mainActor);
		break;

	case EACTOR::tree:
		printf("tree: %d\n", e_mainActor);
		break;
	}


	return 0;						// ����I���m�F����
}




/// ���܂�
// C++�ł͈ȉ��̂悤�Ȃ��̂����܂��B�����C++14�ɊY�����܂��B�g�����͗񋓂Ɠ����ł��B
enum class EC_STUDY { C_Part1, C_Part2 };