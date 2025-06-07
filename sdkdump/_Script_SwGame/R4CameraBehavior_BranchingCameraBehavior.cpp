#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_BranchingCameraBehavior.hpp"
#include "RsCameraConditional.hpp"
_Script_SwGame::RsCameraConditional*& _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_Conditional() {
    return *(_Script_SwGame::RsCameraConditional**)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_TrueBehaviors() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::set_TrueApplyBlendAsOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_TrueBlendInTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
bool _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_FalseApplyBlendAsOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
bool _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_TrueApplyBlendAsOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void* _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_FalseBehaviors() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::get_FalseBlendInTime() {
    return *(float*)((uintptr_t)this + 0x60);
}
void _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::set_FalseApplyBlendAsOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_BranchingCameraBehavior");
    return result;
}
void _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::GetBlendParameters(float& OutBlendTime, bool& bOutApplyBlendAsOffset, bool bBoolean) {
    return;
}
void* _Script_SwGame::R4CameraBehavior_BranchingCameraBehavior::GetBehaviors(bool bBoolean) {
    return;
}
