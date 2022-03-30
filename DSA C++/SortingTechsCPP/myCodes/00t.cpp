#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;
int main() {
    std::map<string, int, std::greater<int>> Map;
    Map["Chotu"] = 90909009;
    Map ["Amit"] = 982349819;
    Map.insert(std::make_pair("Bot", 782348818));
                
   // Loop through map
    for (auto &el1: Map) {
        cout << el1.first<< " "<< el1.second <<endl;
   // Access using [1 operator
   // cout « Map["Chotu"] << endl;
    return 0;
    }