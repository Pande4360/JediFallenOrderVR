#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimMarkupData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x10]; public:
    void* get_EndPoseDirectionality();
    float& get_CombatSuctionOffset();
    bool get_bShouldCrouch();
    void set_bShouldCrouch(bool value);
    bool get_bProgressionHalfway();
    void set_bProgressionHalfway(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
