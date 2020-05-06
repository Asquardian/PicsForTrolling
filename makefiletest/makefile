Gpp = g++

Gpp_FLAG = -Wall -Werror -Wextra -c

BIN = ./bin

SRC = ./src

all : main question QUIZ

main :
	$(Gpp) $(Gpp_FLAG) $(SRC)/main.cpp

question :
	$(Gpp) $(Gpp_FLAG) $(SRC)/question.cpp

QUIZ :
	$(Gpp) main.o question.o -o $(BIN)/QUIZ.exe
