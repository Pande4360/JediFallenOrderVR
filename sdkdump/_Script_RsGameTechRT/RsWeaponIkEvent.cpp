#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWeaponIkEvent.hpp"
void* _Script_RsGameTechRT::RsWeaponIkEvent::get_WeaponType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsWeaponIkEvent::get_ActionType() {
    return (void*)((uintptr_t)this + 0x1);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWeaponIkEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsWeaponIkEvent");
    return result;
}
