# XORCipherMethods

<a class="github-button" href="https://github.com/saya-de/XORCipherMethods/archive/HEAD.zip" data-color-scheme="no-preference: dark_high_contrast; light: dark_high_contrast; dark: dark_high_contrast;" data-icon="octicon-download" aria-label="Download saya-de/XORCipherMethods on GitHub">Download</a>

This is a simple collection of encryption and decryption methods for XOR strings in C++ and C#. XOR string encryption methods are used to hide string contents by encrypting the given string together with a given key.

In my case, they are often used for temporary strings
in internal cheat processes to make it more difficult for an anti-cheat to read or analyse them. This means they can't enforce their integrity protection(string ref scanning), so you can do anything with the strings without the anti-cheat flagging or detecting them. It also keeps the basic a$$ skids from reading your strings at runtime with a debugger.

This is a very simple and weak encryption method. So if you want to encrypt sensitive data, I wouldn't recommend this method. Consider using AES or similar encryption methods.

