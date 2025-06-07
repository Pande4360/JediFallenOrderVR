#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NativeUserListEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UserListEntry : public NativeUserListEntry {
    static _Script_CoreUObject::Class* static_class();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
}; // Size: 0x28
#pragma pack(pop)
}
