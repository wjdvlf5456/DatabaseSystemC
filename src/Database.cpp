#include <iostream>
#include <string>
#include <cstdio>   // stdio.h
#include <cstdlib>  // stdlib.h
#include <cstring>  // string.h

#include "database.h"

using namespace std;

Entry *create(Type type, string key, void *value) {
    Entry *newEntry = new Entry; // 새 Entry 객체 동적 할당
    newEntry->type = type; // type 설정
    newEntry->key = key; // key 설정
    newEntry->value = value; // value 설정
    return newEntry; // 새 Entry 객체 포인터 반환
}

/*
void init(Database &database) {
    // 데이터베이스 초기화 작업을 수행하는 코드를 여기에 작성하세요.
    // 예: database 변수의 초기화, 메모리 할당 등
}
*/


int main() {

    Database db;
    //init(db);


    bool flag = false;
    string command;
    string typeCommand;

    enum Type type;
    string typeString;

    struct Entry entry;
    string key;
    string value;

	cout << "command (list, add, get, del, exit): ";

	while(true){
	    cin >> command;
	    flag = true;
        if(command=="list"){
            cout << "list" << endl;

        }else if(command=="add"){
            cout << "key: ";
            cin >> key;

            cout << "type (int, double, string, array): ";
            cin >> typeString;

            if(typeString == "int"){
                type = INT;
                // 지역변수 선언
                cout << "int";

            }else if(typeString == "double"){
                type = DOUBLE;
                cout << "double";

            }else if(typeString == "string"){
                type = STRING;
                cout << "string";

            }else if(typeString == "array"){
                type = ARRAY;
                cout << "array";

            }else{
                cout << "invalid command";
                flag = false;
                continue;
            };

            if(flag==true){
                cout << "value: ";
                cin >> value;

            }

            //create(type,key,value);   실패한 코드 / create 함수 호출 시에 value가 어떤 데이터 타입인지 알 수 없기에 오류 발생
            create(type,key,&value);




        }else if(command=="get"){
            cout << "get" << endl;

        }else if(command=="del"){
            cout << "del" << endl;

        }else if(command=="exit"){
            exit(0);                            // 프로그램 종료, exit(1); 은 강제종료

        }else{
            cout << "invalid command" << endl;
            flag = true;
        }


        // "invalid command" 이후 한줄 공백 입력
        cout << endl;


    }

	return 0;
}









