#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAnimNotifyState_SetHitCollisionBase.hpp"
#include "SwAnimNotifyState_SetMultiHitCollision.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_SetMultiHitCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_SetMultiHitCollision");
    return result;
}
void* _Script_SwGame::SwAnimNotifyState_SetMultiHitCollision::get_CollisionParts() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_SwGame::SwAnimNotifyState_SetMultiHitCollision::get_CollisionPartsName() {
    return (void*)((uintptr_t)this + 0x110);
}
