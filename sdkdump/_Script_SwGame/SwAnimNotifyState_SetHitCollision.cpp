#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAnimNotifyState_SetHitCollision.hpp"
#include "SwAnimNotifyState_SetHitCollisionBase.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_SetHitCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_SetHitCollision");
    return result;
}
void* _Script_SwGame::SwAnimNotifyState_SetHitCollision::get_CollisionParts() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_SwGame::SwAnimNotifyState_SetHitCollision::get_CollisionPartsName() {
    return (void*)((uintptr_t)this + 0xc8);
}
