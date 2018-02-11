// testleveldb.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "leveldb/db.h"

int _tmain(int argc, _TCHAR* argv[])
{

	leveldb::DB *db;
	leveldb::Options  options;
	options.create_if_missing = true;
	leveldb::Status status = leveldb::DB::Open(options, "testdb.db", &db);

	return 0;
}

