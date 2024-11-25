#include <iostream>
#include <list>
#include <algorithm>

void printStations(const std::list<const char*>& stations, const char* year) {
    printf("%s年の山手線駅一覧:\n", year);
    for (const auto& station : stations) {
        printf("%s ", station);
    }
    printf("\n\n");
}

int main() {
    // 1970年の駅リスト
    std::list<const char*> stations1970 = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
        "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo",
        "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo",
        "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu",
        "Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi",
        "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 2019年の駅リスト (1971年に追加された西日暮里駅を挿入)
    std::list<const char*> stations2019 = stations1970;
    auto posNippori = std::find(stations2019.begin(), stations2019.end(), "Nippori");
    stations2019.insert(std::next(posNippori), "Nishi-Nippori");

    // 2022年の駅リスト (2020年に開業した高輪ゲートウェイ駅を挿入)
    std::list<const char*> stations2022 = stations2019;
    auto posShinagawa = std::find(stations2022.begin(), stations2022.end(), "Shinagawa");
    stations2022.insert(std::next(posShinagawa), "Takanawa Gateway");

    // 各年の駅リストを出力
    printStations(stations1970, "1970");
    printStations(stations2019, "2019");
    printStations(stations2022, "2022");

    return 0;
}
