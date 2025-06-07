#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
namespace _Script_Engine {
struct BlendSpaceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BlendSpacePlayer : public _Script_Engine::AnimNode_AssetPlayerBase {
    private: char pad_60[0xd0]; public:
    float& get_X();
    float& get_Y();
    float& get_Z();
    float& get_Playrate();
    bool get_bLoop();
    void set_bLoop(bool value);
    float& get_StartPosition();
    _Script_Engine::BlendSpaceBase*& get_BlendSpace();
    bool get_bResetPlayTimeWhenBlendSpaceChanges();
    void set_bResetPlayTimeWhenBlendSpaceChanges(bool value);
    void* get_BlendFilter();
    void* get_BlendSampleDataCache();
    _Script_Engine::BlendSpaceBase*& get_PreviousBlendSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
