/*
*   c2dmath.c
*
*   Simple C 2D maths library made by Marc Montagut - @MarcMDE  
*
*   Copyright (c) 2016 Marc Montagut
*
*   This software is provided "as-is", without any express or implied warranty. In no event
*   will the authors be held liable for any damages arising from the use of this software.
*
*   Permission is granted to anyone to use this software for any purpose, including commercial
*   applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*     1. The origin of this software must not be misrepresented; you must not claim that you
*     wrote the original software. If you use this software in a product, an acknowledgment
*     in the product documentation would be appreciated but is not required.
*
*     2. Altered source versions must be plainly marked as such, and must not be misrepresented
*     as being the original software.
*
*     3. This notice may not be removed or altered from any source distribution.
*
*/

#include "c2dmath.h"
#include <math.h>       // Standard math library.  

// return a+b
Vector2 Vector2Add(Vector2 a, Vector2 b)
{
    return (Vector2){a.x+b.x, a.y+b.y};
}

// return a-b
Vector2 Vector2Sub(Vector2 a, Vector2 b)
{
    return (Vector2){a.x-b.x, a.y-b.y};
}

// return a*b
Vector2 Vector2Product(Vector2 a, Vector2 b)
{
    return (Vector2){a.x*b.x, a.y*b.y};
}

// return a/b
Vector2 Vector2Quotient(Vector2 a, Vector2 b)
{
    return (Vector2){a.x/b.x, a.y/b.y};
}

Vector2 Vector2FloatProduct(Vector2 v, float mult)
{
    Vector2Scale(&v, mult);
    return v;
}

Vector2 Vector2FloatQuotient(Vector2 v, float div)
{
    Vector2Divide(&v, div);
    return v;
}

// return v*scale
void Vector2Scale(Vector2 *v, float scale)
{
    v->x *= scale;
    v->y *= scale;
}

// return -v
void Vector2Negate(Vector2 *v)
{
    v->x = -v->x;
    v->y = -v->y;
}

// divides vector/float
void Vector2Divide(Vector2 *v, float div)
{
    *v =(Vector2){v->x/div, v->y/div};
}

// return vectors dot product
float Vector2DotProduct(Vector2 a, Vector2 b)
{
    return a.x*b.x+a.y*b.y;
}

// return vector lenght
float Vector2Lenght(Vector2 v)
{
    return sqrt((v.x*v.x)+(v.y*v.y));
}

// normalizes Vector2
void Vector2Normalize(Vector2 *v)
{
    Vector2Divide(v, Vector2Lenght(*v));
}

// returns distance btw a&b
float Vector2Distance(Vector2 a, Vector2 b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

Vector2 Vector2Zero()
{
    return (Vector2){0, 0};
}

Vector2 Vector2Right()
{
    return (Vector2){1, 0};
}

Vector2 Vector2Up()
{
    return (Vector2){0, 1};
}

Vector2 Vector2One()
{
    return (Vector2){1, 1};
}

