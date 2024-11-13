#pragma once
#include <iostream>
#include <stdio.h>


//クラステンプレートの定義
template <typename T1,typename T2>
class Math
{
public:
	T1 a;
	T2 b;

	Math(T1 a, T2 b) :a(a), b(b) {};

	// 2つの異なる型の値を比較して小さい方を返すメンバ関数
	auto Min() -> decltype(a < b ? a : b) {
		return (a < b) ? a : b;

	}
};


