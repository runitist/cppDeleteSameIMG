#pragma once

#include <iostream> //I/O스트림 헤더
#include <io.h> //파일 구조체 헤더
#include <string>//스트링 객체 사용 헤더
#include <list>//리스트 자료형 헤더
#include <fstream>

using namespace std;

void searchingDir(string path);
int isFileOrDir(_finddata_t fd);
list<_finddata_t> getFileList(string path);
void deleteSameIMG(list<_finddata_t>& fl, string &subPath);
bool SizeComp(const _finddata_t& lhs, const _finddata_t& rhs);