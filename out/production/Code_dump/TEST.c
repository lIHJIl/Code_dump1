#include<stdalign.h>
#include<stdbool.h>
#include<stdio.h>
bool isPalindrome(int x) {

    int pali=0,tmp=x;
    while(x>0)
    {
        pali= (pali*10)+(x%10);
        x = x/10;
        printf("%d  %d\n",x,pali);
    }
    if(pali==tmp)
    {  printf("Yes");
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    isPalindrome(121);

}
