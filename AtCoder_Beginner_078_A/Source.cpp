/*
問題文
プログラミングでは 16 進数がよく使われます。
16 進数では 0,1,…,9 の数字の他に A, B, C, D, E, F の 6 つのアルファベットを使い，それぞれ 10,11,12,13,14,15 を表します。
この問題では 2 つのアルファベット X,Y が与えられます。 X と Y はどちらも A, B, C, D, E, F のうちどれかです。
X と Y を 16 進数として見たとき，どちらのほうが大きいかを判定してください。
*/

#include<iostream>
#include<vector>
#include<map>

int main() {
	std::vector<char> v;
	v.resize(2);  //reserveがなんか…？
	std::map<char, int> mp;
	mp['A'] = 10;  //結局連番の大小なので0から並べても良かったが問題に従った
	mp['B'] = 11;
	mp['C'] = 12;
	mp['D'] = 13;
	mp['E'] = 14;
	mp['F'] = 15;

	for (auto&& x : v) {
		std::cin >> x;
	}

	std::cout << (mp[v[0]] < mp[v[1]] ? "<":mp[v[0]]>mp[v[1]]? ">":"=") << std::endl;

	return 0;
}