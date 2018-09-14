#include <stdio.h>
int fatorial(int i){
    if(i>0){
    return i * fatorial(i-1);
    }
    else{

        return 1;
    }

}
int main(){
 int a ;
 while(1==1){
 scanf("%d",&a);
 printf("%d",fatorial(a));
 printf("\n");
 }
}
