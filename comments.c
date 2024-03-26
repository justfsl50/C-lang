#include <stdio.h>

int main() {
    printf("New line: Hello\nWorld\n");
    printf("Tab: Hello\tWorld\n");
    printf("Backspace: Hello\bWorld\n");
    printf("Carriage return: Hello\rWorld\n");
    printf("Form feed: Hello\fWorld\n");
    printf("Backslash: Hello\\World\n");
    printf("Single quote: Hello\'World\'\n");
    printf("Double quote: Hello\"World\"\n");
    printf("Null character: Hello\0World\n");
    printf("Alert or bell: Hello\aWorld\n");
    printf("Vertical tab: Hello\vWorld\n");
    printf("Question mark: Hello\?World\n");
    printf("Octal number: Hello\101World\n");
    printf("Hexadecimal number: Hello\x57orld\n");

    return 0;
}

/*Output:New line: Hello
World
Tab: Hello	World
Backspace: HelloWorld
Carriage return: Hello
World
Form feed: HelloWorld
Backslash: Hello\World
Single quote: Hello'World'
Double quote: Hello"World"
Null character: HelloAlert or bell: HelloWorld
Vertical tab: HelloWorld
Question mark: Hello?World
Octal number: HelloAWorld
Hexadecimal number: HelloWorld
*/
/*Escape sequences:charecter sequence that represents a single charecter. they are used to represent non-printable charecters in a string.they are used with a backslash(\) followed by a charecter or a sequence of digits.they specify action within a line or string of texts.
    \n=New line
    \t=Tab
    \b=Backspace
    \r=Carriage return
    \f=Form feed
    \\=Backslash
    \'=Single quote
    \"=Double quote
    \0=Null charecter
    \a=Alert or bell
    \v=Vertical tab
    \?='?' charecter
    \ooo=Octal number of one to three digits
    \xhh=Hexadecimal number of one or more digits

*/
