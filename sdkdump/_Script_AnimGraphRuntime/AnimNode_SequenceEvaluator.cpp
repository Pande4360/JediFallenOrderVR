#include "..\FUObjectArray.hpp"
#include "AnimNode_SequenceEvaluator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
float& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_ExplicitTime() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_Engine::AnimSequenceBase*& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_Sequence() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x60);
}
bool _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_bShouldLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_ReinitializationBehavior() {
    return (void*)((uintptr_t)this + 0x74);
}
void _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::set_bShouldLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_bTeleportToExplicitTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::set_bTeleportToExplicitTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_bReinitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::set_bReinitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator");
    return result;
}
