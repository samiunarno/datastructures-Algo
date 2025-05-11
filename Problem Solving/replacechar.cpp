//Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

//You have the following three operations permitted on a word:

//Insert a character
//Delete a character
//Replace a character
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minDistance(string word1, string word2){
    int m = word1.length();
    int n = word2.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1,0));

    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0){
                dp[i][j] = j;  // need to insert all characters of word2
            }
            else if(j == 0){
                dp[i][j] = i;  // need to delete all characters of word1
            }
            else if(word1[i-1] == word2[j-1]){
                dp[i][j] = dp[i-1][j-1];  // no operation needed
            }
            else{
                dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));

            }
        }
    }

    return dp[m][n];
}

int main() {
    string word1 = "intention";
    string word2 = "execution";
    cout << "Minimum operations: " << minDistance(word1, word2) << endl;
    return 0;
}
