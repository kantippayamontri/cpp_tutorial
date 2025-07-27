# Name collision in code

## type 1: define the same function name or variable name in the same file

```cpp
# include <iostream>
using namespace std;

int cout(int x ){}
int main() {
    cout(12); // what is cout? from our code or from the std namespace?
}
```

## type 2: defince the same function name or variable name in the same program (maybe defince in other file but the name is the same)

```cpp
// a.cpp
int MyFcn(){}
```

````cpp
```cpp
// main.cpp
#include <iostream>
int MyFcn(){} // this will cause name collision with a.cpp
int main(){

return 0;
}
````

# How to fix name collision?

## using namespace

with namespace, you can use the same name in diferrent namespace

```cpp
// you can has cout function withou naming conflict
// because our cout is defined in the global scope(namespace)
// but std::cout is defined in the std namespace

#include <iostream> // you can use all name in the std namespace
void cout(int x) // cout is defined in the global namespace( namespace )
{
    std::cout << x << std::endl;
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  cout(12);

  return 0;
}
````

## Best practice
    + try to avoid using-directive `using namespace std;` in header files or in large projects, as it can lead to name collisions(in the future).

