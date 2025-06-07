#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimationStateBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationState : public AnimationStateBase {
    private: char pad_8[0x20]; public:
    void* get_Transitions();
    int32_t& get_StateRootNodeIndex();
    int32_t& get_StartNotify();
    int32_t& get_EndNotify();
    int32_t& get_FullyBlendedNotify();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
