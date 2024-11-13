#include "CloseRangeAttacker.h"
#include <stdio.h>

CloseRangeAttacker::CloseRangeAttacker()
{
	name = { "剣使い" };
	printf("%sが助太刀に来た\n", name);

}

CloseRangeAttacker::~CloseRangeAttacker()
{
	
	printf("%sが敵を倒した\n", name);
}

void CloseRangeAttacker::Attack()
{
	printf("%sが剣を振り下ろした\n", name);

}
