#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKModifier.hpp"
#include "RsWeaponIkModifier.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWeaponIkModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWeaponIkModifier");
    return result;
}
void* _Script_RsGameTechRT::RsWeaponIkModifier::get_WeaponIkEvent() {
    return (void*)((uintptr_t)this + 0x28);
}
