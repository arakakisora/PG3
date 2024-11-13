#pragma once
class Enemy
{
public:

	void Update();

	
	

private:
	static void (Enemy::* spEnemyMoveTable[])();
	// 接近
	void ApproachUpdate();
	//攻撃
	void Attakc();
	// 離脱
	void LeaveUpdate();
};

