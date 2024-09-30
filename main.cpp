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

int main() {

	printf("int型%d\n", Min<int>(100, 99));
	printf("float型%f\n", Min<float>(10.0f, 9.9f));
	printf("double型%lf\n", Min<double>(10.0, 9.9));
	printf("char型%c\n", Min<char>('A', 'B'));

	return 0;
}