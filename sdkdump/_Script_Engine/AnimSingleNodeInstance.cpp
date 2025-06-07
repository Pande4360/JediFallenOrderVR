#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "AnimInstance.hpp"
#include "AnimSingleNodeInstance.hpp"
#include "AnimationAsset.hpp"
_Script_Engine::AnimationAsset*& _Script_Engine::AnimSingleNodeInstance::get_CurrentAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSingleNodeInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSingleNodeInstance");
    return result;
}
void* _Script_Engine::AnimSingleNodeInstance::get_PostEvaluateAnimEvent() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_Engine::AnimSingleNodeInstance::StopAnim() {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetReverse(bool bInReverse) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetPlaying(bool bIsPlaying) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetPreviewCurveOverride(void*& PoseName, float Value, bool bRemoveIfZero) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetPosition(float InPosition, bool bFireNotifies) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetPlayRate(float InPlayRate) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetLooping(bool bIsLooping) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetBlendSpaceInput(_Script_CoreUObject::Vector& InBlendInput) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::SetAnimationAsset(_Script_Engine::AnimationAsset* NewAsset, bool bIsLooping, float InPlayRate) {
    return;
}
void _Script_Engine::AnimSingleNodeInstance::PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) {
    return;
}
float _Script_Engine::AnimSingleNodeInstance::GetLength() {
    return;
}
_Script_Engine::AnimationAsset* _Script_Engine::AnimSingleNodeInstance::GetAnimationAsset() {
    return;
}
