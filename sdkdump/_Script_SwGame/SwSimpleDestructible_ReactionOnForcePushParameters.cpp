#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_ReactionOnForcePushParameters.hpp"
float& _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::get_DirectionalHitRadiusFalloff() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::get_DestroyPhaseOnForcePush() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::set_EnableDebugDrawForHitPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::set_DestroyPhaseOnForcePush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::get_StartPhysicsOnForcePushOnSingleBonesWithPrefix() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::get_EnableDebugDrawForHitPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ReactionOnForcePushParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ReactionOnForcePushParameters");
    return result;
}
