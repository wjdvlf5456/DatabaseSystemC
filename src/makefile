FLAGS = -Werror -std=c++11

#============================
main.exe: Database.o
	g++ -o main.exe Database.o

Database.o: Database.cpp
	g++ ${FLAGS} -c Database.cpp
