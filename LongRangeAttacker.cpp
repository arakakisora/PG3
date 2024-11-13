#include "LongRangeAttacker.h"
#include"stdio.h"
LongRangeAttacker::LongRangeAttacker()
{
	name = { "弓使い" };
	printf("%sが助太刀に来た\n",name);
}

LongRangeAttacker::~LongRangeAttacker()
{

	printf("%sが敵を倒した\n", name);

}

void LongRangeAttacker::Attack()
{
	printf("%sが矢を放った\n", name);

}
