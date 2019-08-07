#pragma once

#include <iostream> //I/O��Ʈ�� ���
#include <io.h> //���� ����ü ���
#include <string>//��Ʈ�� ��ü ��� ���
#include <list>//����Ʈ �ڷ��� ���
#include <fstream>

using namespace std;

void searchingDir(string path);
int isFileOrDir(_finddata_t fd);
list<_finddata_t> getFileList(string path);
void deleteSameIMG(list<_finddata_t>& fl, string &subPath);
bool SizeComp(const _finddata_t& lhs, const _finddata_t& rhs);