
#include<iostream>
using namespace std;
int main(){

int a = 43;
void* ptr =&a;
cout << *(int*)ptr<<endl;
return 0;

}