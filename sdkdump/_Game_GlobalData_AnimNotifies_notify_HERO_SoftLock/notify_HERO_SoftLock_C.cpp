#include "..\FUObjectArray.hpp"
#include "notify_HERO_SoftLock_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAnimNotify_HeroSoftLock.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_HERO_SoftLock::notify_HERO_SoftLock_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_HERO_SoftLock.notify_HERO_SoftLock_C");
    return result;
}
