#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_RsTechRT {
struct RsLayeredBlendDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsLayeredBlend : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xb0]; public:
    void* get_BasePose();
    _Script_RsTechRT::RsLayeredBlendDefinition*& get_Definition();
    void* get_BlendPoses();
    void* get_PoseActive();
    void* get_PoseBlendTimeMultiplier();
    bool get_bHasRelevantPoses();
    void set_bHasRelevantPoses(bool value);
    bool get_bBaseHasWeight();
    void set_bBaseHasWeight(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
