# C++ Style
[https://google.github.io/styleguide/cppguide.html]
## Naming
- Class: FooBar
- Attribute:
    - private foo_bar_
    - public foo_bar
- Function: FooBar(int foo_bar)

# Fundamental
## File
- read file line by line:
```cpp
#include <sstream>
#include <string>

std::ifstream file_reader(infile);
std::string line;

while (std::getline(infile, line))
{
    std::istringstream iss(line);
    int a, b;
    if (!(iss >> a >> b)) { break; } // error

    // process pair (a,b)
}
```
## String
- string to const char*: .c_str() or .data()
- string to char*:
```cpp
string s1 = "abcdefg";
char *data;
int len = s1.length();
data = (char *)malloc((len+1)*sizeof(char));
s1.copy(data,len,0);
```
- char* to string:
```cpp
string s;
char *p = "adghrtyh";
s = p;
//printf("%s",s1.c_str()) since argument has to be char*
```