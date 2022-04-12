#include <stdio.h>
#include <stdbool.h>


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
    if (a < b && a < c) return a;
    else if (b < c) return b;
    else return c;
}

int max(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (b > c) return b;
    else return c;
}

int ggt(int a, int b) {
    int ggtcandidate = 0;
    for (int i = 1; i < (min(a, b, a) + 1); i++) {
        if (a % i == 0 && b % i == 0) ggtcandidate = i;
    }
    return ggtcandidate;
}

bool istprim(int a) {
    for(int i=2; i<a;i++) {
        if (ggt(a,i) != 1) return false;
    }
    return true;
}

int twinprimes(int limit) {
    for (int i = 3; i < limit; i++) {
        if (istprim(i) && istprim(i + 2)) {
            printf("Primzwil: %d,%d\n", i, i + 2);
            i+=2;
        }
    }
    return 0;
}


int main() {
    float fa = 3, fb = 4, fc = 32.49, fd = 0;
    int a = 24, b = 12, c = 5;
    int maxerg, minerg;
    int ggterg;
    int sumerg;
    int diferg;
    int proderg;
    float quoterg;
    int rounderg;
    bool primerg;
    sumerg = summe(a, b);
    diferg = differenz(a, b);
    proderg = produkt(a, b);
    quoterg = quotient(fa, fb);
    rounderg = runde(fc);
    maxerg = max(a, b, c);
    minerg = min(a, b, c);
    ggterg = ggt(a, b);
    primerg = istprim(a);
    printf("Summe: %d Differenz: %d Produkt: %d Quotient: %.2f Gerundet: %d\n", sumerg, diferg, proderg, quoterg,
           rounderg);
    printf("max of %d %d %d is: %d\n", a, b, c, maxerg);
    printf("min of %d %d %d is: %d\n", a, b, c, minerg);
    printf("ggt of %d,%d is: %d\n", a, b, ggterg);
    printf("Istprim: %d\n", (int) primerg);
    twinprimes(100);
    return 0;
}