all: pizza
	
pizza: src/*
	g++ -I include -o bin/pizza -O3 -std=c++11 src/*