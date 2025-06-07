#include "..\FUObjectArray.hpp"
#include "HC_WallPress_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsWallPressComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x29a0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_MovementPadRange() {
    return *(float*)((uintptr_t)this + 0x29ac);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_MovementMinimumMagnitude() {
    return *(float*)((uintptr_t)this + 0x29a8);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_AtEndOfWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x29b0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_BufferedMovementDirection() {
    return (void*)((uintptr_t)this + 0x29bc);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::set_AtEndOfWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_BackJumpMinimumMagnitude() {
    return *(float*)((uintptr_t)this + 0x29b8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_BackJumpPadRange() {
    return *(float*)((uintptr_t)this + 0x29b4);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_BufferedJumpDirection() {
    return (void*)((uintptr_t)this + 0x29bd);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::get_BufferedIsTryingToMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x29be + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::set_BufferedIsTryingToMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29be + 0);
    *(uint8_t*)((uintptr_t)this + 0x29be + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::ShouldAttachToActiveSurvey0() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_WallPress.HC_WallPress_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::CanDoJumpAction(void* ActionName, bool& CanJump) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::CategorizePadInput(bool& IsTryingToMove, void*& MovementDirection, void*& JumpDirection) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::OnEnterWallPress0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::OnExitWallPress0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::Wall_Press_Jump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::Force_Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::BP_WallPressTick0(float Dt) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::OnJumpBuffered(void* ActionName, bool IsBufferedRelease) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::OnJumpUnbuffered(void* ActionName, bool IsBufferedRelease) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress::HC_WallPress_C::ExecuteUbergraph_HC_WallPress(int32_t EntryPoint) {
    return;
}
