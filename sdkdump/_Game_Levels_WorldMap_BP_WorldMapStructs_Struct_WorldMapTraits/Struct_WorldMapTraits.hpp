#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits {
#pragma pack(push, 1)
struct Struct_WorldMapTraits {
    private: char pad_0[0x20]; public:
    void* get_BlinkingVar_5_06C09A87462236842BDF8EAD3AC6B2A5();
    void* get_BlinkingSpeedVar_6_7A021B2F4C47745C62AA9DB45F9B0FA9();
    void* get_MultiplierVar_9_8C660AC54AB30812F92784B0CD8DE018();
    void* get_CorrespondingName_11_8C8969DD4C87E6ECE05A6B94A2767591();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
