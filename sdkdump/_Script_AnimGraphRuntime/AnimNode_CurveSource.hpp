#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_CurveSource : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x30]; public:
    void* get_SourcePose();
    void* get_SourceBinding();
    float& get_Alpha();
    void* get_CurveSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
