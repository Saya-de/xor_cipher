namespace csharpXOR
{
    class csharpXOR
    {
        static string xor_encrypt(string input, string cryptkey)
        {
            char[] encrypted = new char[input.Length];
            for (int i = 0; i < encrypted.Length; i++)
            {
                encrypted[i] = (char)(input[i]^cryptkey[i%cryptkey.Length]);
            }
            return new string(encrypted);
        }

        static string xor_decrypt(string input, string cryptkey)
        {
            return xor_encrypt(input, cryptkey);
        }
    }
}
