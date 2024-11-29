#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>  
#include <cstdio>   



int main() {

	// メールアドレスを格納する
	std::vector<std::string> emails;

	// ファイルからデータを読み込む
	std::ifstream inputFile("PG3_2024_03_02.txt"); // ファイル名を指定
	if (!inputFile) {
		std::cerr << "ファイルを開けませんでした。" << std::endl;
		return 1;
	}

	// ファイルから1行ずつ読み込み
	std::string email;
	while (std::getline(inputFile, email, ',')) { // カンマ区切りで読み込み
		
		email.erase(std::remove(email.begin(), email.end(), '['), email.end());
		email.erase(std::remove(email.begin(), email.end(), ']'), email.end());
		emails.push_back(email);
	}
	inputFile.close();

	// ソート処理（昇順）
	std::sort(emails.begin(), emails.end());

	for (const auto& e : emails) {
		
		// メールアドレスを出力
		printf("%s\n", e.c_str());
	}

	return 0;
}
