#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CollisionProfile : public DeveloperSettings {
    private: char pad_38[0x120]; public:
    void* get_Profiles();
    void* get_DefaultChannelResponses();
    void* get_EditProfiles();
    void* get_ProfileRedirects();
    void* get_CollisionChannelRedirects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
