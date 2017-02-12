all: pizza sampler validator
	
pizza: src/*
	g++ -I include -o bin/pizza -O3 -std=c++11 src/*

sampler: tools/sampler.cpp
	g++ -o bin/tools/sampler -O3 -std=c++11 tools/sampler.cpp

validator: tools/validator.cpp
	g++ -o bin/tools/validator -O3 -std=c++11 tools/validator.cpp