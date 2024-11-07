
Points to Remember:

%[^\n] represents take string including spaces till you get newline character

%s takes the string till the space character

strcmp() will return 0 if both the strings are equal

char str1[] = "hello" -->Tstr1 acts as a constant pointer to a string
        ->str1 = "hi"; constant pointer cannot be changed
        ->str1 = str2; constant pointer connot be changed
        ->str1++;      constant pointer connot be changed
        ->*str = 'H';  works because string is not constant
        ->Here address cannot be changed and the variable value can change

char *p = "Hello" -->p acts as a pointer to constant string
        ->p = "Hi";    works because pointer is not constant
        ->p = s;       
        ->p++;    
        ->*p = 'H'     It will not work because string is constant cannot be changed
        ->Here address can be changed and the variable is constant that cannot be changed
        
