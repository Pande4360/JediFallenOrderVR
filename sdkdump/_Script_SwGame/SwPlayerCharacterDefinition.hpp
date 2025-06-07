#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsPlayerCharacterDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerCharacterDefinition : public _Script_RsGameTechRT::RsPlayerCharacterDefinition {
    private: char pad_200[0x10]; public:
    void* get_TargetingProfiles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}
