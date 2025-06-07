#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTService_BuddySelectAttachPoint : public _Script_AIModule::BTService {
    private: char pad_70[0x10]; public:
    float& get_AttachDecayAmount();
    float& get_MinimalStayDuration();
    bool get_bIgnoreBackpackWhenDiceRoll();
    void set_bIgnoreBackpackWhenDiceRoll(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
