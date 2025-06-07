#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityInstanceData : public _Script_CoreUObject::Object {
    private: char pad_28[0xb0]; public:
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_HeroStateModifier();
    _Script_Engine::AnimationAsset*& get_CurrentAnimation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
