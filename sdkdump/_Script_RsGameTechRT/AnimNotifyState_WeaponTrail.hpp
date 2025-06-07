#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState_Trail.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimNotifyState_WeaponTrail : public _Script_Engine::AnimNotifyState_Trail {
    private: char pad_68[0x50]; public:
    int32_t& get_WeaponIndex();
    void* get_RequiredTagQuery();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
