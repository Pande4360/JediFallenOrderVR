#include "..\FUObjectArray.hpp"
#include "notify_SetHitCollision_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAnimNotifyState_SetHitCollision.hpp"
void* _Game_GlobalData_AnimNotifies_notify_SetHitCollision::notify_SetHitCollision_C::get_AttackType() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetHitCollision::notify_SetHitCollision_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetHitCollision.notify_SetHitCollision_C");
    return result;
}
