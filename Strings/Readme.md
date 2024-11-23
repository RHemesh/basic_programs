
Points to Remember:

%[^\n] It takes string including spaces till it gets newline character

%s takes the string till the space character

__fpurge(stdin);  It is a non-standard function used to clear buffer/purge for new 
                line character 

getchar();  It is a standard function in c ,It clears the buffer for newline character

strcmp() will return 0 if both the strings are equal



Constant pointer and pointer to constant:

char str1[] = "hello" -->Tstr1 acts as a constant pointer to a string
        ->str1 = "hi"; constant pointer cannot be changed
        ->str1 = str2; constant pointer connot be changed
        ->str1++;      constant pointer connot be changed
        ->*str = 'H';  works because string is not constant
        ->Here address cannot be changed and the variable value can change

char *p = "Hello" -->p acts as a pointer to constant string
        ->p = "Hi";    works because pointer is not constant
        ->p = s;       works because pointer is not constant
        ->p++;         works because pointer is not constant
        ->*p = 'H'     It will not work because string is constant cannot be changed
        ->Here address can be changed and the variable is constant that cannot be changed


Here we can initialize string in three ways:

char str[10];  ->char of array
char *str;     ->pointer to a string
char *str = (char *)malloc(10 *sizeof(char));   ->Dynamic memory allocation

char str[10];
It is a static memory allocation stored in a stack which allocates 10 bytes of continous memory
It is fixed size of memory cannot be resized,It is a compile time allocation
we can change the character for particular index str[0] = 'h';    -->It works
we cannot change the whole string by assigning the literal str = "new";  -->error
we can copy the string using strcpy(str,"Hemesh");     ->No error
to print value and a address --> printf("%s:address = %p",str,(void *)&str);

char *str;
It is stored in a stack memory and points to a string literal stored in read only memory
we cannot modify the string literal contents
we can modify the string  str[0] = 'j'     ->error
we can assign another string str = "new";  ->no error,It works

char *str = malloc(10)
It is stored in stack nd pointed to the dynamically allocated memory
manually we need to free the memory after allocating
we can modify the existing string content str[0] = 'H'  ->No error
we cannot reassign the string literal to the string str = "djfsk";  ->error






Prototypes:

size_t strlen(const char *s);

strcpy():   strcpy(chat *t,const char *s);
            void xstrcpy(char *t,const char *s)

strncpy():  strncpy(chat *t,const char *s,size_t num);


strcat():   strcat(char *s1,const char *s2);
            void xstrcat(char *s1,const char *s2)

strncat():  strcat(char *s1,const char *s2,size_t num);



strcmp():   strcmp(const char *s1,const char *s2);
            int xstrcmp(const char *s1,const char *s2)

strncmp():   strncmp(const char *s1,const char *s2,size_t num);   



strchr():   strchr(const char *str,int character);
            char *xstrchr(const char *str,int character)
            //It finds the first occurance of the character

strrchr():  strrchr(const char *str,int character);
            char *xstrrchr(const char *str,int character)
            //This function finds the last occurance of the character in the string

strstr():   strstr(const char *str,const char *substr);
            char *xstrstr(const char *str,const char *substr)

strdup():   strdup(const char *s);
            void xstrdup(const char *s)
            //It creates duplicate of the string

strset():   strset(char *str,int ch);
            void xstrset(char *str,int c)
            //It sets all the characters of the string to the character which we have specified

strlwr(),strupr() -->converts string to upper and lower characters
           -> strlwr(char *s);
            void xstrlwr(char *s);
           ->strupr(char *s);
            void xstrupr(char *s);



