#include "stdio.h"
template<typename T>
T Min(T a, T b) {

	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
template<>
char Min<char>(char a, char b) {


	return printf("数字以外は代入できません");

}

int recursivePaying(int n) {


	if (n == 1) {
		return 100;
	}
	else {
		return 2 * recursivePaying(n - 1) - 50;
	}


}

int main() {
	int a = 1072;
	int b = 0;
	int n = 1;
	while (a > b)
	{
		b = recursivePaying(n);
		printf("再起給料%d::", b);
		printf("通常給料%d::", a);
		printf("%d時間\n", n);
		a += 1072;
		n++;
	}

	return 0;
}