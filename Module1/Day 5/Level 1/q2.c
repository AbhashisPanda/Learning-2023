#include <stdio.h>

struct Complex {
    double real; 
    double imag; 
};


void readComplex(struct Complex *comp) {
    printf("Enter real part: ");
    scanf("%lf", &comp->real);

    printf("Enter imaginary part: ");
    scanf("%lf", &comp->imag);
}

void writeComplex(struct Complex comp) {
    printf("%.2f + %.2fi\n", comp.real, comp.imag);
}


struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}


struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;

    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    
    printf("Enter the first complex number:\n");
    readComplex(&c1);
    printf("Enter the second complex number:\n");
    readComplex(&c2);

   
    sum = add(c1, c2);
    printf("Sum: ");
    writeComplex(sum);

  
    product = multiply(c1, c2);
    printf("Product: ");
    writeComplex(product);

    return 0;
}