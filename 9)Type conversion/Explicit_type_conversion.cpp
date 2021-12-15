/*
float f = 10 / 4;
However, because 10 and 4 are both integers, no promotion takes place.
Integer division is performed on 10 / 4, resulting in the value of 2,
which is then implicitly converted to 2.0 and assigned to f!

A cast represents an explicit request by the programmer to do a type conversion.

C-style casts:

int i1 = 10;
int i2 = 4;
float f = (float)i1 / i2;

Tell the compiler to convert i1 to a floating point value.
Because i1 is a floating point value, i2 will then be converted to a floating point value as well,
and the division will be done using floating point division instead of integer division!

Static_cast:

int i1 = 10;
int i2 = 4;
float f = static_cast<float>(i1) / i2;


*/
