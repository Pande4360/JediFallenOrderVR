#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WeaponIkWeaponTypeInfo.hpp"
int32_t& _Script_RsGameTechRT::WeaponIkWeaponTypeInfo::get_WeaponIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::WeaponIkWeaponTypeInfo::get_WeaponEndSocketName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::WeaponIkWeaponTypeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.WeaponIkWeaponTypeInfo");
    return result;
}
