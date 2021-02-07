#include "queen.h"

void queen(int b) {

int q=1;

arr[q]=0;

while(q!=0) {

arr[q]=arr[q]+1;

while((arr[q]<=b)&&!Q_place(q))

arr[q]++;

if(arr[q]<=b) {

if(q==b)

print(b); else {

q++;

arr[q]=0;

}

} else

q--;

}

}
