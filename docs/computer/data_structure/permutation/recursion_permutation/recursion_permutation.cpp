#include <iostream>
using namespace std;

// Macro: swap
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

char list[] = {'a', 'b', 'c'};
void perm(char *list, int i, int n);

int main (){

    perm(list, 0, 2);

    return 0;

}

void perm(char *list, int i, int n){
    int j, temp;
    if(i==n){
        for(j=0; j<=n; j++){
            cout << list[j];
        }
        cout << endl;
        cout << endl;
    }
    else{
        for(j=i; j<=n; j++){
            SWAP(list[i], list[j], temp);

            perm(list, i+1, n);

            SWAP(list[i], list[j], temp);
        }
    }
}
