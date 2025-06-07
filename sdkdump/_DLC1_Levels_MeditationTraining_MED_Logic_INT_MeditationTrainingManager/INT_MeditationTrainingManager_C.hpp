#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _DLC1_Levels_MeditationTraining_MED_Logic_INT_MeditationTrainingManager {
#pragma pack(push, 1)
struct INT_MeditationTrainingManager_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void CleanUpUIWidgets();
}; // Size: 0x28
#pragma pack(pop)
}
