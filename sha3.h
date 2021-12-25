#pragma once
#include <cstdint>

typedef struct _sha3ctx {
	uint64_t aui64State[25]; //�n�b�V�����
	uint64_t aui64Block[25]; //�n�b�V���u���b�N
	size_t nHashLength; //�n�b�V����
	size_t nBlockLength; //�u���b�N��
	size_t nBlockCount; //�u���b�N��
	size_t nBlockCursor; //�u���b�N�J�[�\��
} SHA3_CTX;

int SHA3Init(SHA3_CTX* context, size_t hashbitlen, size_t blockbytelen = 0);
void SHA3Load(SHA3_CTX* context, const unsigned char* data, size_t len);
void SHA3Final(unsigned char* digest, SHA3_CTX* context);

void SHA3_224(void* _data, size_t _len, void* _hash);
void SHA3_256(void* _data, size_t _len, void* _hash);
void SHA3_384(void* _data, size_t _len, void* _hash);
void SHA3_512(void* _data, size_t _len, void* _hash);
