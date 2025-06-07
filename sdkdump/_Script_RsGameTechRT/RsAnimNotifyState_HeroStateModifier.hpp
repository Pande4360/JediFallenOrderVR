#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_HeroStateModifier : public _Script_Engine::RsConditionalTargetAnimNotifyState {
    private: char pad_c0[0x10]; public:
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ModifierDefinition();
    bool get_bCheckValidBeforePushing();
    void set_bCheckValidBeforePushing(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
