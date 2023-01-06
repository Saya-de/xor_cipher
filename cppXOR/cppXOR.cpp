#include "cppXOR.hpp"
#include <string>

 std::string cppXOR::xor_encrypt(std::string input, std::string cryptkey)
{
	std::string output;
	for (int i = 0; i < input.size(); ++i)
	{
		output += input[i] ^ cryptkey[i % cryptkey.size()];
	}
	return output;
}

std::string cppXOR::xor_decrypt(std::string input, std::string cryptkey)
{
	return xor_encrypt(input, cryptkey);
}