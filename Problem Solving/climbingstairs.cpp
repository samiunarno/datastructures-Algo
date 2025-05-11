//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <iostream>
using namespace std;

int climbStairs(int n) {
    if(n<=2){
        return n;
    }
    int first = 1;
    int second = 2;
    int result = 0;
    for(int i=3;i<=n;i++){
        result = first + second;
        first = second;
        second = result;

    }
    
    return result;

}