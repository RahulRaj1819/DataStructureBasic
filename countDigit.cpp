#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


//Check if Number Has Equal Digit Count and Digit Value
class Solution {
public:
    bool digitCount(string num) {
       unordered_map<char,int>mp;
       //precompute
       for(int i =0; i<num.size(); i++){
           mp[num[i]]++;
       }
       for(int i =0; i<num.size(); i++){
           //fetching
          char ch = '0'+i;
          if(num[i] !='0' + mp[ch]){
              return false;
          }
       }
       return true;
    }
};

//Number of Digit One(hard 233leetcode)
class Solution {
public:
    int countDigitOne(int n) {
        
        // count the number of digits and store each in order in a vector
        int dig = 0, temp = n;
        vector<int> num;
        while(temp!=0){
            dig++;
            num.push_back(temp%10);
            temp=temp/10;
        }

        reverse(num.begin(), num.end());

        if(n==0){
            return 0;
        }
        if(dig==1){
            return 1;
        }


        // make a matrix to count the number of ones upto a given number of digits
        vector<vector<int>> v(dig-1,vector<int>(dig-1,0));
        int ans = 0;

        for(int i=0; i<dig-1; i++){
            v[i][i]=pow(10,i);
            for(int j=i+1; j<dig-1; j++){
                if(j==i+1){
                    v[i][j]=v[i][j-1]*9;
                }
                else{
                    v[i][j]=v[i][j-1]*10;
                }
            }
        }

        //if dig is number of digits in the given number, then find sum of v[i][j] where i<dig-1 and j<dig-1
        for(int i=0; i<dig-1; i++){
            for(int j=0; j<dig-1; j++){
                ans+=v[i][j];
            }
        }

        // count number of ones left 
        for(int i=0; i<num.size(); i++){
            int curr_dig = dig-i-1;
            if(i==0 && num[i]==1){
                ans+=n-pow(10,dig-1)+1;
                continue;
            }
            else if(num[i]==0){
                continue;
            }

            if(num[i]==1){
                int temp_num=0;
                for(int j=i; j<num.size(); j++){
                    temp_num = temp_num*10+num[j];
                }
                ans+= temp_num - pow(10,dig-i-1) + 1;
            }
            else{
                ans += pow(10,curr_dig);
            }

            int diff=0;
            if(i==0){
                diff = num[i]-1;
            }
            else{
                diff = num[i]-0;
            }
            
            int sum = 0;
            for(int j=0; j<dig-i-1; j++){
                for(int k=0; k<dig-i-1; k++){
                    sum+= v[j][k];
                }
            }

            ans+=diff*sum;
        }

        return ans;

    }
};


// class Solution {
// public:
//     int countDigitOne(int n) {
//         double cnt = 0;
//         while(n>0){
//             for(int i =1; i<=n; i++){
//                 if(i%10 == 1){
//                     cnt = cnt+1;
//                 }
//                 i = i/10;
//             }
//         }
//          return cnt; 
//     }
// };
