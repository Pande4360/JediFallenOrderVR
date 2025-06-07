#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsMapSectionInteriorLevel {
    private: char pad_0[0x3]; public:
    void* get_InteriorLevel();
    bool get_bIsScreteArea();
    void set_bIsScreteArea(bool value);
    bool get_bIsInitiallyExplored();
    void set_bIsInitiallyExplored(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
