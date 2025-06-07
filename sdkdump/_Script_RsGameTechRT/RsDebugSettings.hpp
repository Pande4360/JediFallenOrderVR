#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDebugSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x130]; public:
    void* get_SelectPreviousActorKey();
    void* get_SelectNextActorKey();
    void* get_ShowDebugAnimationHotkey();
    void* get_AIDebugInput();
    void* get_DisablePhysicalAnimationHotkey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
