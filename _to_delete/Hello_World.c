#include<stdio.h>
int sum();
void printname();
void printdept();

int main(){
    printname();
    printdept();
    int x=10 , y=100;
    int c = sum(x,y);
    printf("%d \n",c);
    return 0;
}
int sum(int a, int b){
    return a+b;
}
void printname(){
    printf("Parvez Ali\n");

}
    void printdept(){
        printf("ICE\n");
    }