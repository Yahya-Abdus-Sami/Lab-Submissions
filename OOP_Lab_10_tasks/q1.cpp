#include <iostream>

template<typename n>
int find(n a[],n b,int s){
    for(int i=0;i<s;i++){
        if (a[i]==b) return i;
    } return -1;
}

int main() {
    float a[]={1.5f,2.3f,1.7f,4.6f};
    std::cout<<find(a,1.5f,4);

    return 0;
}
