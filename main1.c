#include "func1.c"

int main(){
    time_t t0 = time(0);
    char *sstr = (char*)malloc(10*sizeof(char));
    sstr = "qwertyui";
    amount_different(sstr);
    int lenth = maxinmum_lenth();
    char symb = find_symbol(sstr, lenth);
    printf("Str is: %s\n", sstr);
    printf("Ans is: ");
    print_ans(symb, lenth);
    
    time_t t1 = time(0);
    double time_in_seconds = difftime(t1, t0);
    printf("\nTime is: %lf", time_in_seconds);

    return 0;
}