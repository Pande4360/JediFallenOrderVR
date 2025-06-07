#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm.hpp"
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_MaxAngleDiff() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_MaxPosDiff() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_MaxScaleDiff() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_MaxEffectorDiff() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_MinEffectorDiff() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_bRetarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_EffectorDiffSocket() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::set_bRetarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_ParentKeyScale() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::get_bActuallyFilterLinearKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm");
    return result;
}
void _Script_Engine::RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm::set_bActuallyFilterLinearKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
