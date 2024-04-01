#include <iostream>
#include <algorithm>

static bool areAnagram(std::string word1, std::string word2);

int main(int argc, char * argv[]) {
	if(argc < 3) {
		std::cerr << "Usage:" << std::endl;
		std::cerr << "\t" << argv[0] << " world1 world2" << std::endl;		
		return EXIT_FAILURE;
	}
	
	if(areAnagram(argv[1], argv[2])) {
		std::cout << argv[1] << " and " << argv[2] << " are anagram" << std::endl;
	}
	else {
		std::cout << argv[1] << " and " << argv[2] << " are NOT anagram" << std::endl;
	}
	
	return EXIT_SUCCESS;
}

bool areAnagram(std::string word1, std::string word2) {
	if(word1.length() != word2.length()) return false;
	
	std::string tmp1, tmp2;
	for(int i = 0; i < word1.length(); i++) {
		tmp1[i] = tolower(word1[i]);
		tmp2[i] = tolower(word2[i]);
	}
	
	std::sort(tmp1.begin(), tmp1.end());
	std::sort(tmp2.begin(), tmp2.end());	
	return tmp1 == tmp2;
}
