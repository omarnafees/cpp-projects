#include "logic/logic_gates.hpp"
bool ANDGate(bool x,bool y)
{
    return (x&&y);
}

bool ORGate(bool x,bool y)
{
    return (x||y);
}

bool NOTGate(bool x)
{
    return (!x);
}

bool XORGate(bool x,bool y)
{
    return (x!=y);
}

bool NANDGate(bool x, bool y)
{
    return (!(x&&y)); 
}

bool NORGate(bool x, bool y)
{
    return (!(x||y));
}