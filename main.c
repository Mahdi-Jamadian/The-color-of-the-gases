#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */

int main() {
    char input;
    for (int i = 0; i < 1; ++i) {
        printf("Enter the first letter of the gas color : ");
        scanf("%c",&input);
        if(input=='y'||input=='Y')
            printf("The color of the cylinder gas is yellow .");
                    else if(input=='o'||input=='O')
            printf("The color of the cylinder gas is orange .");
        else
            --i;
            printf("Contents unknown");
    }
    return 0;
}
