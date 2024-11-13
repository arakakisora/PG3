#pragma once
#include "yuusha.h"
class CloseRangeAttacker :
    public yuusha
{
public:

    CloseRangeAttacker();
    ~CloseRangeAttacker()override;

    void Attack()override;

};

