#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsSwimComponent.hpp"
namespace _Script_SwGame {
struct SwStaminaMeterComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSwimComponent : public _Script_RsGameTechRT::RsSwimComponent {
    private: char pad_218[0x8]; public:
    _Script_SwGame::SwStaminaMeterComponent*& get_m_StaminaMeter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
