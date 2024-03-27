#ifndef DATABASE_H
#define DATABASE_H

#include <string>

using namespace std;

enum Type {
	INT, DOUBLE, STRING, ARRAY
};

struct Array {
	int size;
	Type type;
	void *items;
};

struct Entry {
	Type type;
	string key;
	void *value;
};

struct Database {
	string key;
	Type type;
	void *value;

};

// 엔트리를 생성한다.
Entry* create(Type type, string key, void *value);

// 데이터베이스를 초기화한다.
void init(Database &database);

// 데이터베이스에 엔트리를 추가한다.
void add(Database &database, Entry *entry);

// 데이터베이스에서 키에 해당하는 엔트리를 찾는다.
Entry get(Database &database, string &key);

// 데이터베이스에서 키에 해당하는 엔트리를 제거한다.
void remove(Database &database, string &key);

// 데이터베이스를 해제한다.
void destroy(Database &database);

#endif
