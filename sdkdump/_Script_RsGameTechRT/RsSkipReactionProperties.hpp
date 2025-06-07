#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSkipReactionProperties {
    private: char pad_0[0x18]; public:
    bool get_bAllowReactionOnForceSlow();
    void set_bAllowReactionOnForceSlow(bool value);
    bool get_bAllowReactionOnBlockBreak();
    void set_bAllowReactionOnBlockBreak(bool value);
    bool get_bAllowReactionOnUnblockable();
    void set_bAllowReactionOnUnblockable(bool value);
    bool get_bSkipOnParryReactions();
    void set_bSkipOnParryReactions(bool value);
    void* get_ExcludedDamageClasses();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
