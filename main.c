#include <stdio.h>


int summe(int a, int b) {
    return a + b;
}


int differenz(int a, int b) {
    return a - b;
}

int produkt(int a, int b) {
    return a * b;
}

float quotient(float a, float b) {
    if (b != 0) {
        return a / b;
    } else return 0.0;
}

int runde(float a) {
    a += 0.5f;
    return a;
}

int min(int a, int b, int c) {
    if (a < b & a < c) return a;
    else if (b < c) return b;
    else return c;
}

int max(int a, int b, int c) {
    if (a > b & a > c) return a;
    else if (b > c) return b;
    else return c;
}

int ggt(int a, int b){
    int ggtcandidate=0;
    for(int i=1;i<(min(a,b,a)+1);i++){
        if (a%i==0&b%i==0) ggtcandidate = i;
    }
    return ggtcandidate;
}


int main() {
    float fa = 3, fb = 4, fc = 32.49, fd = 0;
    int a = 34, b = 85, c =5;
    int maxerg, minerg;
    int ggterg;
    int sumerg;
    int diferg;
    int proderg;
    float quoterg;
    int rounderg;
    sumerg = summe(a, b);
    diferg = differenz(a, b);
    proderg = produkt(a, b);
    quoterg = quotient(fa, fb);
    rounderg = runde(fc);
    maxerg = max(a,b,c);
    minerg = min(a,b,c);
    ggterg=ggt(a,b);
    printf("Summe: %d Differenz: %d Produkt: %d Quotient: %.2f Gerundet: %d\n", sumerg, diferg, proderg, quoterg,rounderg);
    printf("max of %d %d %d is: %d\n",a,b,c,maxerg);
    printf("min of %d %d %d is: %d\n",a,b,c,minerg);
    printf("ggt of %d,%d is: %d\n",a,b,ggterg);
    return 0;
}