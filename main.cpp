#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
#include <windows.h> 


int rollDice() {
	return rand() % 6 + 1;
}


void showResult(int* result) {
	if (*result == 1) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}
}


void setTimeout(void (*pFunc)(int*), int seconds, int* result) {
	Sleep(seconds * 1000);
	pFunc(result);
}

auto captureInput = [&](int &num) {
	printf("サイコロの出目が奇数なら1を、偶数なら2を入力してね！: ");
	scanf_s("%d", &num);
	};

int main() {
	srand(time(NULL));

	int num, dice, ans;

	
	captureInput(num);


	dice = rollDice();
	printf("何の目が出るかな？\n");



	if ((dice % 2 == 0 && num == 2) || (dice % 2 != 0 && num == 1)) {
		ans = 1;
	}
	else {
		ans = 0;
	}


	setTimeout(showResult, 3, &ans);
	printf("出た目は%dだよ\n", dice);

	//[]() {printf("lamdatest"); }();

	return 0;
}
