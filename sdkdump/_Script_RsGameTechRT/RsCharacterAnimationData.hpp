#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCharacterAnimDataBase.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterAnimationData : public RsCharacterAnimDataBase {
    private: char pad_40[0x8]; public:
    _Script_Engine::AnimationAsset*& get_AnimAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
