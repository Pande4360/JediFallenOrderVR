#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAnimSynchronizer : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xf20]; public:
    int32_t& get_Selector();
    int32_t& get_SelectorOverlap();
    float& get_SelectorNormalizedSubRange();
    float& get_TweenTime();
    void* get_Poses();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf50
#pragma pack(pop)
}
