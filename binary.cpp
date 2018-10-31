#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>
#include <iostream>
using namespace std;

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size1) {
            size = (size1/8)+1;
            array = new char[size];
            for (int i = 0; i < size; ++i){
                array[i] = 0x00;
            }
        }
        
        void bitOn(int position) {
            char var = 0x01 << (position%8);
            array[position/8] = array[position/8] | var;
            for (int i = 0; i < 8; ++i){
                unsigned long bit = (array[position/8]>> i) & 1UL;
                cout<<bit;
            }cout<<endl;
        }
             
        void bitOff(int position) {
            char var = 0x01 << (position%8);
            array[position/8] = array[position/8] & ~var;
            for (int i = 0; i < 8; ++i){
                unsigned long bit = (array[position/8]>> i) & 1UL;
                cout<<bit;
            }cout<<endl;
        }
             
        bool operator[](int position) {
            char var = 0x01 << (position%8);
            char var1 = array[position/8];
            var = var & var1;
            if (var == 0){
                return false;
            }else{
                return true;
            }             
        }
    
        void clear() {    
            for (int i = 0; i < size; ++i){
                array[i] = 0x00;
            }
        }
             
        ~boolean() {
            delete[]array;
        }
};

#endif