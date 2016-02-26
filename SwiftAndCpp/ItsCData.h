//
//  ItsCData.h
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 26..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#ifndef ItsCData_h
#define ItsCData_h

#include <stdio.h>

struct Vertex {
    float a;
    float b;
    float c;
};

struct Person {
    char name[128];
};


void c_print(const char* msg);
void c_printByte(const unsigned char value);
void c_printChar(const char value);
void c_printInt(const int value);
void c_printFloat(const float value);
void c_printDouble(const double value);
void c_printVertex(const struct Vertex vertex);

void c_transformByte(unsigned char* value);
void c_transformChar(char *value);
void c_transformInt(int* value);
void c_transformFloat(float *value);
void c_transformDouble(double* value);
void c_transformVertex(struct Vertex *vertex);

void c_printIntAsVoidPointer(void *value);
void c_transformIntAsVoidPointer(void *value);

int c_sumIntArray(const int intArray[], int size);

void c_setPersonName(const struct Person* person, const char *name);
void c_printPerson(const struct Person person);



struct SpaceShip;
void c_printSpaceShip(const struct SpaceShip* spaceShip);
#endif /* ItsCData_h */
