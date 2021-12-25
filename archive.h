#pragma once

#include "zlib\zlib.h"
#ifdef _DEBUG
#pragma comment(lib, "MD\\zlibstaticd.lib")
#else
#pragma comment(lib, "MT\\zlibstatic.lib")
#endif

#include <iostream>
#include <string>
#include <vector>

void SetArchivePassword(const std::string& _pass);
void SetArchiveExtension(const std::string& _extension);

bool EncodeArchive(std::string path, int _compress_level = Z_DEFAULT_COMPRESSION, bool _encrypt = true);
bool DecodeArchive(std::string path);
bool CheckArchive(std::string path);

// �������@�t�@�C���̃p�X�i�f�B���N�g�������k�����ꍇ�̓A�[�J�C�u�t�@�C���̊g���q���������������ŏ��̃f�B���N�g���ƂȂ�j
// �������@�t�@�C���f�[�^���󂯎��o�b�t�@�i���炩���ߊm�ۂ��邱�Ɓj�BNULL��nullptr���w�肷��΃f�[�^�T�C�Y�݂̂��Ԃ����B
// ��O�����@�A�[�J�C�u�t�@�C���̃p�X�i�f�B���N�g�������k�����ꍇ�͖��������j�A�[�J�C�u�t�@�C�����̊g���q�����������������k�����t�@�C�����Ɠ����Ȃ�ȗ��B
// �߂�l�@�@�f�[�^�T�C�Y�B�p�X���[�h���Ԉ������t�@�C�������݂��Ȃ��Ƃ��͂O��Ԃ��B
size_t GetDataFromArchive(std::string path, void* dest, std::string archive_path = "");