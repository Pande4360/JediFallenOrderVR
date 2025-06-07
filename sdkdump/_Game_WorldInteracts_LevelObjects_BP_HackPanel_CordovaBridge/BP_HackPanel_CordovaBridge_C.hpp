#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire\BP_HackPanel_Empire_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_LevelObjects_BP_HackPanel_CordovaBridge {
#pragma pack(push, 1)
struct BP_HackPanel_CordovaBridge_C : public _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6a8
#pragma pack(pop)
}
