//
//  ItsCData.c
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 26..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#include "ItsCData.h"



void c_print(const char* msg) {
    printf("%s\n", msg);
}

void c_printByte(const unsigned char value) {
    printf("%d\n", value);
}

void c_printChar(const char value) {
    printf("%c\n", value);
}

void c_printInt(const int value) {
    printf("%d\n", value);
}

void c_printFloat(const float value) {
    printf("%f\n", value);
}

void c_printDouble(const double value) {
    printf("%lf\n", value);
}

void c_printVertex(const struct Vertex vertex) {
    printf("%f %f %f\n", vertex.a, vertex.b, vertex.c);
}

void c_transformByte(unsigned char* value) {
    *value = *value + 10;
}

void c_transformChar(char *value) {
    *value = *value + 1;
}

void c_transformInt(int* value) {
    *value = *value + 10;
}

void c_transformFloat(float *value) {
    *value = *value + 10.0f;
}

void c_transformDouble(double* value) {
    *value = *value + 10.0;
}


void c_transformVertex(struct Vertex *vertex) {
    vertex->a = vertex->a + 10.0;
    vertex->b = vertex->b + 20.0;
    vertex->c = vertex->c + 30.0;
}

void c_printIntAsVoidPointer(void *value) {
    int *ivalue = (int *)value;
    printf("%d\n", *ivalue);
}

void c_transformIntAsVoidPointer(void *value) {
    int *ivalue = (int *)value;
    *ivalue = *ivalue + 100;
}

int c_sumIntArray(const int intArray[], int size) {
    
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += intArray[i];
    }
    return sum;
}

void c_setPersonName(const struct Person* person, const char *name) {
    strcpy(person->name, name);
}

void c_printPerson(const struct Person person) {
    printf("person's name : %s", person.name);
}

