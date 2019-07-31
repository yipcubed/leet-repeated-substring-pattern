#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

// https://leetcode.com/problems/repeated-substring-pattern/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isMultiple(int len, string &s) {
        int i = 0;
        while (i + len < s.length()) {
            if (s[i] != s[i + len])
                return false;
            ++i;
        }
        return true;
    }

    bool repeatedSubstringPattern(string s) {
        for (int sublength = 1; sublength <= s.length() / 2; ++sublength) {
            if (s.length() % sublength == 0 && isMultiple(sublength, s))
                return true;
        }
        return false;
    }
};

void test1() {
    string s = "abab";
    cout << "1 ? " << Solution().repeatedSubstringPattern(s) << endl;

    s = "aba";
    cout << "0 ? " << Solution().repeatedSubstringPattern(s) << endl;

}

void test2() {

}

void test3() {

}