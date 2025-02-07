#include <iostream>
#include <string>
#include <chrono>
#include <cstdio>

int main() {
    // 100,000文字の 'a' で初期化された std::string を作成
    std::string original(100000, 'a');

    // 実行開始メッセージ
    printf("100,000文字を移動とコピーで比較しました。\n");

    // コピーの計測（ナノ秒単位）
    auto start_copy = std::chrono::high_resolution_clock::now();
    std::string copy = original; // コピー処理
    auto end_copy = std::chrono::high_resolution_clock::now();
    auto copy_time = std::chrono::duration<double, std::micro>(end_copy - start_copy).count(); // マイクロ秒（小数付き）

    // ムーブの計測（ナノ秒単位）
    auto start_move = std::chrono::high_resolution_clock::now();
    std::string moved = std::move(original); // ムーブ処理
    auto end_move = std::chrono::high_resolution_clock::now();
    auto move_time = std::chrono::duration<double, std::micro>(end_move - start_move).count(); // マイクロ秒（小数付き）

    // 小数点以下6桁まで表示する
    printf("コピー ： %.6fμs\n", copy_time);
    printf("移動   ： %.6fμs\n", move_time);
    printf("続行するには何かキーを押してください...\n");

    // Windows環境ではキー入力を待つ
    std::cin.get();

    return 0;
}

