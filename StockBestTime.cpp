#include <bits/stdc++.h>
using namespace std;

int bestTime(vector<int>&prices){
    
if(prices.size()<2)
return 0;
  
while(prices[prices.size()-1]==0)
prices.pop_back();
        
int profit = 0;
vector<int>sum;
for(int i=0; i<prices.size()-1; i++){
           
for(int j=i+1; j<prices.size(); j++){
if(prices[i]<=prices[j]){
                    
profit = prices[j]-prices[i];
sum.push_back(profit);
}
}
}
        
for(auto i:sum)
profit=max(profit,i);
        
return profit;
}

int main() {

cout << "Enter size of the array: ";
int stockSize; cin>>stockSize; 
	
vector<int> prices(0,stockSize);
cout << "Enter prices in the array: " << endl;
	
for(int i=0; i<stockSize; i++)
cin>>prices[i];
	    
cout << bestTime(prices) << endl;
    	
return 0;
}