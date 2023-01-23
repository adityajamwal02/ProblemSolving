#include<bits/stdc++.h>
union my_int{
    unsigned int val;
    uint8_t bytes[sizeof(int)];

};

int main(){
    union my_int mi;
    mi.val=6787845467673;
    int n=sizeof(int);
    for(int i=0;i<n;i++){
        printf("byte %d = %hhu\n", i, mi.bytes[i]);
    }
    return 0;
}
