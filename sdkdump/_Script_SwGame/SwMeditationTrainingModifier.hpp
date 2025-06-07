#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingModifier {
    private: char pad_0[0x40]; public:
    void* get_DisplayName();
    void* get_LocalizedName();
    void* get_Description();
    int32_t& get_MaxSetting();
    int32_t& get_CurrentSetting();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
