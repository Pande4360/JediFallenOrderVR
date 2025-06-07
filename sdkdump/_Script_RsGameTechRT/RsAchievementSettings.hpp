#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAchievementSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xa0]; public:
    void* get_AchievementEnumClass();
    void* get_PS4Config();
    void* get_XboxOneConfig();
    void* get_OriginConfig();
    void* get_AchievementNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
