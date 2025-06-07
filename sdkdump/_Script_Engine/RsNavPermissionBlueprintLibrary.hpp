#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
#include "RsBitfield_NavPermissionDetailFlags.hpp"
#include "RsBitfield_NavPermissionFlags.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsNavPermissionBlueprintLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::RsBitfield_NavPermissionFlags MakeFRsBitfield_NavPermissionFlags(void*& Flags);
    _Script_Engine::RsBitfield_NavPermissionDetailFlags MakeFRsBitfield_NavPermissionDetailFlags(void*& Flags);
    void BreakFRsBitfield_NavPermissionFlags(_Script_Engine::RsBitfield_NavPermissionFlags& NavPermissionFlags, void*& Flags);
    void BreakFRsBitfield_NavPermissionDetailFlags(_Script_Engine::RsBitfield_NavPermissionDetailFlags& NavPermissionDetailFlags, void*& Flags);
}; // Size: 0x28
#pragma pack(pop)
}
