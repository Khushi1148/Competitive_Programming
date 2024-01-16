/*Our Monk visits a neighbourhood school to teach kids, once a week. This week, they are studying the famous novel "The Three Musketeers" by Alexandre Dumas. As Monk is a fun teacher, he wants to enact a scene from the novel and hence, must choose 3 children from the class as the musketeers.
There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.*/

// Hackerearth: https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/ 

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	return ch =='a'|ch=='e'|ch=='i'|ch=='o'|ch=='u';
}

vector<string> subsets(string s){
	int sz = (1<<(s.size())); 
	vector<string> ans;
	for(int mask=0;mask<sz; ++mask){
		string subset;
		for(int bit=0; bit<s.size(); ++bit){
			if((mask & (1<<bit))!=0){
				subset.push_back(s[bit]);
			}
		}
		if(subset.size()) ans.push_back(subset);
	}
	return ans;
}

int main(){

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string str[n];
		for(int i=0; i<n; i++){
			cin >> str[i];
		}
		unordered_map<string, int> hash;
		for(int i=0; i<n; i++){
			set<char> distinct_vw;
			for(char ch: str[i]){
				if(isVowel(ch)){
					distinct_vw.insert(ch);
				}
			}
			string vowel_str;
			for(char ch: distinct_vw){
				vowel_str.push_back(ch);
			}

			vector<string> all_subsets = subsets(vowel_str);
			for(string vowel_subset: all_subsets){
				hash[vowel_subset]++;
			}


		}

		long long ans = 0;
		for(auto pr: hash){
			if(pr.second < 3) continue;
			long long ct = pr.second;
			long long ways = ct*(ct-1)*(ct-2)/6;
			if(pr.first.size() %2 == 0) ans -= ways;
			else ans+=ways;

		}
		cout<< ans << "\n";
	}
}
