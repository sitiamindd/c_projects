/** Created by sitiamindd **/

#include <stdio.h>

typedef enum month{jan=1, feb, march, apr, may, june, july, august, sept, oct, nov, dec}month;

typedef struct date{
    month m;
    int d;
}date;


void printdate(date dt){
    switch (dt.m){
        case jan:
            printf("Next date is January %d", dt.d);
            break;
        case feb:
            printf("Next date is Febuary %d", dt.d);
            break;
        case march:
            printf("Next date is March %d", dt.d);
            break;
        case apr:
            printf("Next date is April %d", dt.d);
            break;
        case may:
            printf("Next date is May %d", dt.d);
            break;
        case june:
             printf("Next date is June %d", dt.d);
             break;
        case july:
             printf("Next date is July %d", dt.d);
             break;
        case august:
             printf("Next date is August %d", dt.d);
             break; 
        case sept:
             printf("Next date is September %d", dt.d);
             break;
        case oct:
             printf("Next date is October %d", dt.d);
             break;
        case nov:
             printf("Next date is November %d", dt.d);
             break;
        case dec:
             printf("Next date is December %d", dt.d);
             break;
    }
}

date nextday(date dt){
    
     switch (dt.m){
        case jan:
        case march:
        case may:
        case july:
        case august:
        case oct:
            if (dt.d >= 31){
                dt.d =1;
                dt.m++;
            }else{ dt.d++;}
            break;
        case feb:
            if (dt.d >= 28){
                 dt.d = 1;
                 dt.m++;
            }else {   dt.d++;}
            break;
        case dec:
            if (dt.d >= 31){
                dt.m = (dt.m +1) % 12;
                dt.d = 1;
            }else{ dt.d++;};
            break;
        case apr:
        case june:
        case sept:
        case nov:
            if (dt.d >= 30){
                dt.d = 1;
                dt.m++;
            }else{ dt.d++;}
            break;
        default:
            printf("Error month or date");
       
    }

    date tommorow = {dt.m, dt.d};

    return tommorow;
     
}

int main(){
    date feb28 = {feb, 28};
    printf("Result for Febuary 28:");
    printdate(nextday(feb28));
    
    printf("\n\n");
    date march14 = {march, 14};
    printf("Result for March 14:");
    printdate(nextday(march14));
    
    printf("\n\n");
    date oct31 = {oct, 31};
    printf("Result for October 31:");
    printdate(nextday(oct31));
    
    printf("\n\n");
    date dec31 = {dec, 31};
    printf("Result for December 31:");
    printdate(nextday(dec31));
    return 0;
}
