#include<bits/stdc++.h>
using namespace std;

int cmp( pair<string,int> a, pair<string,int> b){
	if(a.second != b.second) return a.second > b.second;
	return a.first < b.first;
}
int main(){
	map<string , int> mp;
	string s;
	while(getline(cin,s)){
		 string X = "", Y = "";
		 int idx = s.find("-");
		 string s1 = s.substr(0, idx - 1);
		 string s2 = s.substr(idx + 1);
		 vector<string> v;
		 stringstream ss1(s1);
		 string tmp;
		 while( ss1 >> tmp){
		 	v.push_back(tmp);
		 }
		 int a = stoi(v.back());
		 for(int i = 0; i< v.size() - 1; i++){
		 	X += v[i] + " ";
		 }
		 X.pop_back();
		 stringstream ss2(s2);
		 string tmp1;
		 ss2 >> tmp1;
		 int b = stoi(tmp1);
		 while(ss2 >> tmp1){
		 	Y += tmp1 + " ";
		 }
		 Y.pop_back();
		 mp[X] += a; mp[Y] += b;	 
	}
	vector<pair<string,int>> ve;
	for(auto it : mp){
		ve.push_back(it);
	}
	sort(ve.begin(), ve.end(),cmp);
	for(auto it : ve){
		cout << it.first << " " << it.second << endl;
	}
}
