#include<iostream>
#include<cstring>
using namespace std;
int tok_s()
{
    char str[] = "- This, a sample string, OK.";
    char seps[] = " ,.-";
    char* token = NULL;
    cout << "分隔:" << endl;
    char* ptr = NULL;
    token = strtok_s(str, seps, &ptr);//相较于strtok()函数，strtok_s函数需要用户传入一个指针，用于函数内部判断从哪里开始处理字符串
    while (token != NULL) {
        cout << token << endl;
        token = strtok_s(ptr, seps, &ptr);//将分隔后的前字符串交给token, 后字符串交给&ptr, NULL为继承前字符串地址.
        //token = strtok_s(NULL, seps, &ptr);
    }
    return 0;
    //strtok_s多了一个参数next_token，strtok_s把剩下的字符串写到next_token里，这样内部就不用记录子字符串等信息了，从而是线程安全的函数。

    //char input[] = "A bird came down the walk";
    //printf("Parsing the input string '%s'\n", input);  
    //printf("Contents of the input string now: '");
    //for (size_t n = 0; n < sizeof input; ++n)
    //    input[n] ? printf("%c", input[n]) : printf("\\0");
    //puts("'");

    //char str[] = "A bird came down the walk";
    //char* token;
    //const char* delim = " ";
    //char* next_token;
    //printf("Parsing the input string '%s'\n", str);
    //token = strtok_s(str, delim, &next_token);
    //while (token) {
    //    puts(token);
    //    token = strtok_s(NULL, delim, &next_token);
    //}

    //printf("Contents of the input string now: '");
    //for (size_t n = 0; n < sizeof str; ++n)
    //    str[n] ? printf("%c", str[n]) : printf("\\0");
    //puts("'");

 /*   char input[100] = "A bird came down the walk";
    char* token = strtok(input, " ");
    while (token != NULL) {
        cout << token << '\n';
        token = strtok(NULL, " ");
    }*/

    return 0;
}