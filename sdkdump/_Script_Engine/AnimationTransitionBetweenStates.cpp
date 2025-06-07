#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationStateBase.hpp"
#include "AnimationTransitionBetweenStates.hpp"
#include "BlendProfile.hpp"
#include "CurveFloat.hpp"
int32_t& _Script_Engine::AnimationTransitionBetweenStates::get_PreviousState() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AnimationTransitionBetweenStates::get_NextState() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::AnimationTransitionBetweenStates::get_CrossfadeDuration() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::AnimationTransitionBetweenStates::get_StartNotify() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::AnimationTransitionBetweenStates::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::AnimationTransitionBetweenStates::get_EndNotify() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::AnimationTransitionBetweenStates::get_InterruptNotify() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_Engine::CurveFloat*& _Script_Engine::AnimationTransitionBetweenStates::get_CustomCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x28);
}
_Script_Engine::BlendProfile*& _Script_Engine::AnimationTransitionBetweenStates::get_BlendProfile() {
    return *(_Script_Engine::BlendProfile**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimationTransitionBetweenStates::get_LogicType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationTransitionBetweenStates::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationTransitionBetweenStates");
    return result;
}
