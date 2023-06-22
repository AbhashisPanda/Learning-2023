#include <stdio.h>

struct Box {
    double l;
    double w;
    double h;
};

int main() {
    struct Box myBox = {2.0, 3.0, 4.0};
    struct Box *ptr = &myBox;


    double vol = (*ptr).l * (*ptr).w * (*ptr).h;
    double sa = 2 * ((*ptr).l * (*ptr).w + (*ptr).w * (*ptr).h + (*ptr).h * (*ptr).l);

    printf("Volume of the box: %.2f\n", vol);
    printf("Total surface area of the box: %.2f\n", sa);


    vol = ptr->l * ptr->w * ptr->h;
    sa = 2 * (ptr->l * ptr->w + ptr->w * ptr->h + ptr->h * ptr->l);

    printf("Volume: %.2f\n", vol);
    printf("Surface area: %.2f\n", sa);

    return 0;
}