#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"

#pragma once

namespace Test
{
struct BitField
{
	unsigned char bf1:3, bf2:4, bf3:7;

};

class a{virtual void F1();};
class b{virtual void F2();};
class c{virtual void F3();};

class z: public a, public b, public c
{virtual void F();};
};


