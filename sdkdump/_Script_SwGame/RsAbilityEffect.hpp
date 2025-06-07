#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityEffect : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_EffectType();
    void* get_AbilityType();
    bool get_bIsRenewable();
    void set_bIsRenewable(bool value);
    bool get_bCanIgnoreSyncs();
    void set_bCanIgnoreSyncs(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
