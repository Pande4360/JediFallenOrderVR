#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_BlendSpacePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BlendSpaceEvaluator : public AnimNode_BlendSpacePlayer {
    private: char pad_130[0x8]; public:
    float& get_NormalizedTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
