#include <iostream>

int main(){
char in[100];
gets(in);
for(int i=1;i<=100;i++){
if(in[i]==0){
break;
}
cout<<in[i]-10;
}
}
