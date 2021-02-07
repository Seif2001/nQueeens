#include "Q_place.h"
#include "queen.h"
#include<stdio.h>

#include<math.h>

#include<iostream>

using namespace std;

int arr[30],counter=0;

int main() {

int i,num;

cout<<"Enter the number of Queens\n";

cin>>num;

queen(num);

cout<<"Total Solutions="<<counter;

return 0;

}
