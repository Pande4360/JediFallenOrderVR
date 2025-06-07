#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
#include "SwAnimNotifyState_SetHitCollisionBase.hpp"
void* _Script_SwGame::SwAnimNotifyState_SetHitCollisionBase::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_SwGame::SwAnimNotifyState_SetHitCollisionBase::get_SwingDirectionCameraOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotifyState_SetHitCollisionBase::set_SwingDirectionCameraOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_SetHitCollisionBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_SetHitCollisionBase");
    return result;
}
