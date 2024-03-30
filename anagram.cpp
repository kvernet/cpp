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
	
	std::sort(word1.begin(), word1.end());
	std::sort(word2.begin(), word2.end());	
	return word1 == word2;
}
