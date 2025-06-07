#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameplayTagTableRow.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct RestrictedGameplayTagTableRow : public GameplayTagTableRow {
    private: char pad_20[0x8]; public:
    bool get_bAllowNonRestrictedChildren();
    void set_bAllowNonRestrictedChildren(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
