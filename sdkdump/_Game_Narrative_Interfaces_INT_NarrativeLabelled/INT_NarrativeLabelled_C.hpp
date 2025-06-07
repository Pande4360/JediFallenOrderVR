#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_Narrative_Interfaces_INT_NarrativeLabelled {
#pragma pack(push, 1)
struct INT_NarrativeLabelled_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetNarrativeLabelHiddenInGame(bool& Hidden);
    void GetNarrativeLabelColor(_Script_CoreUObject::Color& Result);
    void GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset);
    void GetNarrativeLabel(void*& Label);
}; // Size: 0x28
#pragma pack(pop)
}
