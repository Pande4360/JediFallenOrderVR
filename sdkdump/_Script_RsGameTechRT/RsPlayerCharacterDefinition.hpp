#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCharacterDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPlayerCharacterDefinition : public RsCharacterDefinition {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
