#include "stdio.h"
#include "yuusha.h"
#include "CloseRangeAttacker.h"
#include "LongRangeAttacker.h"
int main() {

	yuusha* Yuusha[3];

	for (int i = 0; i <=2; i++) {
		if (i < 2)
			Yuusha[i] = new CloseRangeAttacker;
		else
			Yuusha[i] = new LongRangeAttacker;
	}

	for (int i = 0; i <=2; i++) {

		Yuusha[i]->Attack();

	}

	for (int i = 0; i <= 2; i++) {

		 delete Yuusha[i];
	}
}