#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>

#ifdef _WIN32
void encryptDecrypt(const wchar_t* toEncrypt, int strLength, const wchar_t* key, wchar_t* output)
{
        int keyLength = wcslen(key);
        for (int i = 0; i < strLength; ++i)
        {
                output[i] = toEncrypt[i] ^ key[i % keyLength];
        }
}
#else
void encryptDecrypt(const char* toEncrypt, int strLength, const char* key, char* output)
{
        int keyLength = strlen(key);
        for (int i = 0; i < strLength; ++i)
        {
                output[i] = toEncrypt[i] ^ key[i % keyLength];
        }
}
#endif
