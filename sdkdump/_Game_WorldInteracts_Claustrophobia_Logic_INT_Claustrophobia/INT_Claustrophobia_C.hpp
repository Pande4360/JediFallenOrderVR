#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Claustrophobia_Logic_INT_Claustrophobia {
#pragma pack(push, 1)
struct INT_Claustrophobia_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ClaustrophobiaUpdateFacing(void* ClausAttachPoint);
    void ClaustrophobiaEnd();
    void ClaustrophobiaStart(void* ClausAttachPoint);
}; // Size: 0x28
#pragma pack(pop)
}
