#include<bits/stdc++.h>

using namespace std;
#define int long long
void blind_eyes() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
//check single length string follows the condition or not
	if(a+b == 1 & s[0]!='?') {
		if(a) {
			if(s[0] == '0') {
				cout << s << '\n';
				return;
			}
			else {
				cout << -1 << '\n';
				return ;
			}
		}
		else {
			if(s[0] == '1') {
				cout << s << '\n';
				return;
			}
			else {
				cout << -1 << '\n';
				return ;
			}
		}
	}
	int j = s.size() - 1, i = 0;
//count rest of the number of 0 and 1 which i can set in the string
	for(i = 0; i <= j; i++) { 
		if(s[i] == '0')a--;
		else if(s[i] == '1')b--;
	}
	if(a < 0 or b < 0) {
		cout << -1 << '\n';
		return ;
	}
//check left side 1 and 0 and if right side is '?' then set respectively . otherwise print -1
	j = s.size() - 1, i = 0;
	while(i < j) {
		if(s[i] == '1' and s[j] == '0') {
			cout << -1 << '\n';
			return ;
		}
		if(s[i] == '0' and s[j] == '1') {
			cout << -1 << '\n';
			return ;
		}
		if(s[i] == '0' and s[j] == '?') {
			if(a) {
				s[j] = s[i];
				a--;
			}
			else {
				cout << -1 << '\n';
				return ;
			}	
		}
		if(s[i] == '1' and s[j] == '?') {
			if(b) {
				s[j] = s[i];
				b--;
			}
			else {
				cout << -1 << '\n';
				return ;
			}	
		}
		i++;
		j--;
	}
//check right side 1 and 0 and if left side is '?' then set respectively . otherwise print -1	
	i = s.size() - 1, j = 0;
	while(i > j) {
		if(s[i] == '1' and s[j] == '0') {
			cout << -1 << '\n';
			return ;
		}
		if(s[i] == '0' and s[j] == '1') {
			cout << -1 << '\n';
			return ;
		}
		if(s[i] == '0' and s[j] == '?') {
			if(a) {
				s[j] = s[i];
				a--;
			}
			else {
				cout << -1 << '\n';
				return ;
			}	
		}
		if(s[i] == '1' and s[j] == '?') {
			if(b) {
				s[j] = s[i];
				b--;
			}
			else {
				cout << -1 << '\n';
				return ;
			}	
		}
		i--;
		j++;
	}
// check both left side and right side contains '?', then set 0 or 1 	
	i = 0, j = s.size() - 1;
	while(i < j) {
		if(s[i] == s[j] and s[i] == '?') {
			if(a > b and a >= 2) {
				s[i] = s[j] = '0';
				a-=2;
			}
			else if(b >= 2) {
				s[i] = s[j] = '1';
				b-= 2;
			}
			else {
				cout << -1 << '\n';
				return ;
			}
		}
		i++;
		j--;
	}
// set the middle 
	if(s[i] == '?') {
		if(a) {
			s[i] = '0';
		}
		else if(b) {
			s[i] = '1';
		}
		else {
			cout << -1  << '\n';
			return ;
		}
	}
	cout << s << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		blind_eyes();
}
