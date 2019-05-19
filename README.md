# AEMath
## What is it?
AEMath is a math library used by AustelEngine

## What's special about this library?
AEMath provide a Math class based on the cmath header. Our math library also have a Vec2, Vec3 and Vec4 class for vectors. Finally, AEMath contains a Matrix class. 
> INFO : AustelEngine will replace GLM for AEMath shortly.

## Examples
### Make a Translation
Code : 
```cpp
int main()
{

  AEMath::Vec3 vec3(2, 5, 2);
  AEMath::Matrix mat;

  mat.Identity();
  mat.Translate(vec3);

  mat.Print();

  return 0;
}
```
Output:
```
1002
0105
0012
0001
```
### Example 2
Code : 
```cpp
int main()
{

    AEMath::Vec3 vec3(2, 5, 2);
    AEMath::Matrix mat;

    mat.Identity();
    mat.Translate(vec3);

    std::cout << "Matrix :" << std::endl;
    mat.Print();

    std::cout << std::endl << "Magnitude : " << vec3.Magnitude() << std::endl;

    return 0;
}
```
Output:
```
Matrix :
1002
0105
0012
0001

Magnitude : 5.74456
```
