/*
��蕶
�v���O���~���O�ł� 16 �i�����悭�g���܂��B
16 �i���ł� 0,1,�c,9 �̐����̑��� A, B, C, D, E, F �� 6 �̃A���t�@�x�b�g���g���C���ꂼ�� 10,11,12,13,14,15 ��\���܂��B
���̖��ł� 2 �̃A���t�@�x�b�g X,Y ���^�����܂��B X �� Y �͂ǂ���� A, B, C, D, E, F �̂����ǂꂩ�ł��B
X �� Y �� 16 �i���Ƃ��Č����Ƃ��C�ǂ���̂ق����傫�����𔻒肵�Ă��������B
*/

#include<iostream>
#include<vector>
#include<map>

int main() {
	std::vector<char> v;
	v.resize(2);  //reserve���Ȃ񂩁c�H
	std::map<char, int> mp;
	mp['A'] = 10;  //���ǘA�Ԃ̑召�Ȃ̂�0������ׂĂ��ǂ����������ɏ]����
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