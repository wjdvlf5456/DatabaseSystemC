#include <iostream>
#include <string>
#include <cstdio>   // stdio.h
#include <cstdlib>  // stdlib.h
#include <cstring>  // string.h

#include "database.h"

using namespace std;

//Entry *create(Type type,string key, void *value){
//
//
//
//
//}




int main() {

    Database db;
    init(db);



    bool flag = false;
    string command;
    string typeCommand;

    enum Type type;
    string typeString;

    struct Entry entry;
    string key;

	cout << "command (list, add, get, del, exit): ";

	while(true){
	    cin >> command;
	    flag = false;
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

                cout << type;

            }else if(typeString == "string"){
                type = STRING;
                cout << "string";

                cout << type;
            //entry *create = (type,key,1);



            }else if(typeString == "array"){
                type = ARRAY;
                cout << "array";

                cout << type;

            }else{
                cout << "invalid command";
            }



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









