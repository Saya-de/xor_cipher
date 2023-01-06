# XORCipherMethods

This is a simple collection of encryption and decryption methods for XOR strings in C++ and C#. XOR string encryption methods are used to hide string contents by encrypting the given string together with a given key.

In my case, they are often used for temporary strings
in internal cheat processes to make it more difficult for an anti-cheat to read or analyse them. This means they can't enforce their integrity protection(string ref scanning), so you can do anything with the strings without the anti-cheat flagging or detecting them. It also keep the basic a$$ skids from reading your strings at runtime with a debugger.

This is a very simple and weak encryption method. So if you want to encrypt sensitive data, I wouldn't recommend this method. Consider using AES or similar encryption methods.

