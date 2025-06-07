#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "DynamicMontageSegmentData.hpp"
_Script_CoreUObject::Class* _Script_Engine::DynamicMontageSegmentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DynamicMontageSegmentData");
    return result;
}
_Script_Engine::AnimationAsset*& _Script_Engine::DynamicMontageSegmentData::get_Asset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DynamicMontageSegmentData::get_BlendSpaceInput() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::DynamicMontageSegmentData::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::DynamicMontageSegmentData::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
