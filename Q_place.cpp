#include  "Q_place.h"
using namespace std;

int Q_place(int pos) {

int j;

for (j=1;j<pos;j++) {

if((arr[j]==arr[pos])||((abs(arr[j]-arr[pos])==abs(j-pos))))

return 0;

}

return 1;

}

void print(int n) {

int p,j;

counter++;

cout<<"\nSolution #"<<counter<<":\n";

for (p=1;p<=n;p++) {

for (j=1;j<=n;j++) {

if(arr[p]==j)

cout<<"Q\t";

else

cout<<"*\t";

}

cout<<"\n";

}

}

