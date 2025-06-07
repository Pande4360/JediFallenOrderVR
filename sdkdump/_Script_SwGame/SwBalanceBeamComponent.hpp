#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsBalanceBeamComponent.hpp"
namespace _Script_SwGame {
struct SwStaminaMeterComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBalanceBeamComponent : public _Script_RsGameTechRT::RsBalanceBeamComponent {
    private: char pad_cf0[0x8]; public:
    _Script_SwGame::SwStaminaMeterComponent*& get_StaminaMeter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xcf8
#pragma pack(pop)
}
