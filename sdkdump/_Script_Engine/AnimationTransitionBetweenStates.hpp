#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimationStateBase.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BlendProfile;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationTransitionBetweenStates : public AnimationStateBase {
    private: char pad_8[0x38]; public:
    int32_t& get_PreviousState();
    int32_t& get_NextState();
    float& get_CrossfadeDuration();
    int32_t& get_StartNotify();
    int32_t& get_EndNotify();
    int32_t& get_InterruptNotify();
    void* get_BlendMode();
    _Script_Engine::CurveFloat*& get_CustomCurve();
    _Script_Engine::BlendProfile*& get_BlendProfile();
    void* get_LogicType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
