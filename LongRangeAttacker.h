#pragma once
#include "yuusha.h"
class LongRangeAttacker :
    public yuusha
{
public:
    LongRangeAttacker();

    ~LongRangeAttacker()override;

    void Attack()override;

};

