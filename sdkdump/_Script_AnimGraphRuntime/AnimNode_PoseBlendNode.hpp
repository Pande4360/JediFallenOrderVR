#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_PoseHandler.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_PoseBlendNode : public AnimNode_PoseHandler {
    private: char pad_98[0x20]; public:
    void* get_SourcePose();
    void* get_BlendOption();
    _Script_Engine::CurveFloat*& get_CustomCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
