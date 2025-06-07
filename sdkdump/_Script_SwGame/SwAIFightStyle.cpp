#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAIFightStyle.hpp"
bool _Script_SwGame::SwAIFightStyle::get_bFallbackAfterActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwAIFightStyle::get_bCanStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_SwGame::SwAIFightStyle::set_bFallbackAfterActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwAIFightStyle::get_bCancelActiveBehaviorIgnoringDistanceIfTargetInSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
bool _Script_SwGame::SwAIFightStyle::get_bMaintainMinPassiveDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_SwGame::SwAIFightStyle::set_bMaintainMinPassiveDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_SwGame::SwAIFightStyle::get_bAlignToActiveSector() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_SwGame::SwAIFightStyle::set_bAlignToActiveSector(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_SwGame::SwAIFightStyle::set_bCanStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_SwGame::SwAIFightStyle::get_bCanMoveBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_SwGame::SwAIFightStyle::set_bCanMoveBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_SwGame::SwAIFightStyle::get_bCanHaveFightTokenStolen() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_SwGame::SwAIFightStyle::set_bCanHaveFightTokenStolen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_SwGame::SwAIFightStyle::set_bCancelActiveBehaviorIgnoringDistanceIfTargetInSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIFightStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwAIFightStyle");
    return result;
}
