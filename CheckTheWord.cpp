#include <bits/stdc++.h>
using namespace std;

int main() {

cout<<"Enter the size of Dictionary: ";
int size; cin>>size;

vector<string>dictionary;
	
cout << endl << "Enter words in the Dictionary:" << endl;
for(int i=0; i<size; i++){
string temp;
cin>>temp;
dictionary.push_back(temp);
}
	
cout << "Enter the word to check: ";
string word; cin>>word;
	
bool isFound = false, word_first = false, word_last = false;
int record;
	
for(int i=0; i<size; i++){
string checker = dictionary[i];
int j=0;
        
if(word_first == false){
while(checker[j]==word[j]){
j++; 
if(j==checker.size()){word_first = true; record = j; i=0; continue;}
}
}
        
if(word_first == true){
while(checker[j]==word[record]){
j++; record++;
if(j==checker.size()) isFound = true;
}    
}
}
	
if(isFound) cout << "Correct match" << endl;
else cout << "No match" << endl;
	
return 0;
}
