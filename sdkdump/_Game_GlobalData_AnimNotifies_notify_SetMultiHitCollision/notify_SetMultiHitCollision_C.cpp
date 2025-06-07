#include "..\FUObjectArray.hpp"
#include "notify_SetMultiHitCollision_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAnimNotifyState_SetMultiHitCollision.hpp"
void* _Game_GlobalData_AnimNotifies_notify_SetMultiHitCollision::notify_SetMultiHitCollision_C::get_AttackType() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetMultiHitCollision::notify_SetMultiHitCollision_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetMultiHitCollision.notify_SetMultiHitCollision_C");
    return result;
}
