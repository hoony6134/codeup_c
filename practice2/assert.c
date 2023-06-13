#include <stdio.h>
#include <assert.h>

void test_case_1() {
    char a[7] = "A";
    int expected_output = 1;
    int i,j,num=0,o[10]={0},k=1,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    assert(num == expected_output);
}

void test_case_2() {
    char a[7] = "Z";
    int expected_output = 26;
    int i,j,num=0,o[10]={0},k=1,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    assert(num == expected_output);
}

void test_case_3() {
    char a[7] = "AA";
    int expected_output = 27;
    int i,j,num=0,o[10]={0},k=1,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    assert(num == expected_output);
}

void test_case_4() {
    char a[7] = "AZ";
    int expected_output = 52;
    int i,j,num=0,o[10]={0},k=1,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    assert(num == expected_output);
}

void test_case_5() {
    char a[7] = "BA";
    int expected_output = 53;
    int i,j,num=0,o[10]={0},k=1,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    assert(num == expected_output);
}

int main() {
    test_case_1();
    test_case_2();
    test_case_3();
    test_case_4();
    test_case_5();
    printf("All test cases passed.");
    return 0;
}