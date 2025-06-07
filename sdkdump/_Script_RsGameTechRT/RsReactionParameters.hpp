#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsDirectionAnimationParameters.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsReactionParameters : public RsDirectionAnimationParameters {
    private: char pad_2[0x2]; public:
    void* get_ReactionType();
    bool get_ChangeCombatState();
    void set_ChangeCombatState(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
