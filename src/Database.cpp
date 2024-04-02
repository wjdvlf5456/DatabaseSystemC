#include <iostream>
#include <string>
#include <cstdio>   // stdio.h
#include <cstdlib>  // stdlib.h
#include <cstring>  // string.h

#include "database.h"

using namespace std;

int main() {

    bool flag = false;
    string command;

	cout << "command (list, add, get, del, exit): ";

	while(true){
	    cin >> command;
	    flag = false;
        if(command=="list"){
            cout << "list" << endl;

        }else if(command=="add"){
            cout << "add" << endl;

        }else if(command=="add"){
            cout << "add" << endl;

        }else if(command=="get"){
            cout << "get" << endl;

        }else if(command=="del"){
            cout << "del" << endl;

        }else if(command=="exit"){
            cout << "exit" << endl;
            exit(0);                            // 프로그램 종료, exit(1); 은 강제종료

        }else{
            cout << "invalid command" << endl;
            flag = true;

        }

        string key;

        if(flag == true){

        } else{
        cout << "key: ";
        cin >> key;



        cout << "type (int, double, string, array): " << endl;

        }

        // "invalid command" 이후 한줄 공백 입력
        cout << endl;


    }

	return 0;
}
