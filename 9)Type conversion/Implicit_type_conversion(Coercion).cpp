/*
There are two type of conversions: Implicit and Explicit.

Implicit type conversion (also called automatic type conversion or coercion) is performed whenever one fundamental data type
is expected, but a different fundamental data type is supplied, and the user does not explicitly tell the compiler how to perform
this conversion (via a cast).
The compiler automatically transforms one fundamental data type into another.

There are two types of Implicit conversions: Numeric promotion(or widening) and Numeric conversions(or narrowing).

Whenever a value from one type is converted into a value of a larger similar data type, this is called a numeric promotion (or widening,
Ex: long l(64); // widen the integer 64 into a long

When we convert a value from a larger type to a similar smaller type, or between different types, this is called a numeric conversion.
Ex: short s = 2; // convert integer 2 to a short

*/

