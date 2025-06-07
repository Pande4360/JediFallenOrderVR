#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_WallPress.hpp"
void* _Script_RsGameTechRT::AnimState_WallPress::get_CurrentState() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::AnimState_WallPress::get_MovementDirection() {
    return (void*)((uintptr_t)this + 0x3);
}
bool _Script_RsGameTechRT::AnimState_WallPress::get_bIsSidling() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_WallPress::set_bIsSidling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_WallPress::get_bIsWallJumping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_WallPress::set_bIsWallJumping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_WallPress::get_bCanReach() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_WallPress::set_bCanReach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::AnimState_WallPress::get_ReachDirection() {
    return (void*)((uintptr_t)this + 0x5);
}
float& _Script_RsGameTechRT::AnimState_WallPress::get_InPlaceJumpHeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::AnimState_WallPress::get_MovementProgressionDt() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_WallPress::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_WallPress");
    return result;
}
