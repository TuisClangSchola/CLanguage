// Part13 : C++での構造体

#include <stdio.h>		// C言語標準のインクルードファイル
#include <Windows.h>	// Zeromemoryのためだけに呼び出し


// --------------------------------------------------
// 構造体の宣言
struct SActor
{
private:
	int ID;					// ID
	int HP;					// 体力
	int power;				// 攻撃力


public:
	// 初期化
	SActor(int ID, int HP, int power) :ID(ID), HP(HP), power(power) {}


	// 解放
	~SActor()
	{
		ZeroMemory(this, sizeof(this));
	}


	// 攻撃を受けたら
	void HitDamage(int e_attack)
	{
		// 死んだら
		if (HP - e_attack < 0)
		{
			HP = 0;
			printf("%dが死んだ！\n", ID);
			return;
		}
		// ただ攻撃を受けただけなら
		else
		{
			HP -= e_attack;
			printf("攻撃を受けた\n");
			return;
		}
	}


	// 攻撃力
	int GetPower()
	{
		return power;
	}
};
// --------------------------------------------------


// プログラムコードの出力大本
int main()
{
	/*
	今回の内容は構造体についてです。
	*/


	// 構造体にはCとC++での区別があり、C++での構造体を記述します。
	// といってもC++を勉強したと思うので意味は説明しなくてもわかると思うのでコードだけ載せる形をとります。

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


	return 0;						// 正常終了確認処理
}