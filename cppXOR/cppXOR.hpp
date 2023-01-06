#pragma once
#include <string>

class cppXOR
{
private:

public:
	static std::string xor_encrypt(std::string input, std::string cryptkey);
	static std::string xor_decrypt(std::string input, std::string cryptkey);
};