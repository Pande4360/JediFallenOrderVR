#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIAnimMoveTransitionCondition {
    private: char pad_0[0x20]; public:
    void* get_ParameterName();
    _Script_Engine::AnimSequence*& get_AnimationAsset();
    void* get_Op();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
