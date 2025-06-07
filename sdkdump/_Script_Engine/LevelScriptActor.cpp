#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "Actor.hpp"
#include "LevelScriptActor.hpp"
bool _Script_Engine::LevelScriptActor::RemoteEvent(void* EventName) {
    return;
}
bool _Script_Engine::LevelScriptActor::get_bInputEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Script_Engine::LevelScriptActor::SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    return;
}
void _Script_Engine::LevelScriptActor::set_bInputEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LevelScriptActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelScriptActor");
    return result;
}
void _Script_Engine::LevelScriptActor::WorldOriginLocationChanged(_Script_CoreUObject::IntVector OldOriginLocation, _Script_CoreUObject::IntVector NewOriginLocation) {
    return;
}
void _Script_Engine::LevelScriptActor::ReceiveLevelVisible() {
    return;
}
void _Script_Engine::LevelScriptActor::ReceiveLevelHidden() {
    return;
}
void _Script_Engine::LevelScriptActor::LevelReset() {
    return;
}
