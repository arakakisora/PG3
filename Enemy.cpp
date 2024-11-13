#include "Enemy.h"
#include "stdio.h"




void (Enemy::* Enemy::spEnemyMoveTable[])() = {

	&Enemy::ApproachUpdate, // 接近
	&Enemy::Attakc,         //攻撃
	&Enemy::LeaveUpdate     // 離脱

};

void Enemy::Update()
{
	for (int i = 0; i <= 2; i++) {

		(this->*spEnemyMoveTable[i])();

	}


}

void Enemy::ApproachUpdate()
{
	printf("接近");
	printf("\n↓\n");
}

void Enemy::Attakc()
{
	printf("攻撃");
	printf("\n↓\n");
}

void Enemy::LeaveUpdate()
{
	printf("離脱");
}
