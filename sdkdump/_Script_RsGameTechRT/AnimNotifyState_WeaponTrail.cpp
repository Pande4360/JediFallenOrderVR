#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState_Trail.hpp"
#include "AnimNotifyState_WeaponTrail.hpp"
int32_t& _Script_RsGameTechRT::AnimNotifyState_WeaponTrail::get_WeaponIndex() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::AnimNotifyState_WeaponTrail::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimNotifyState_WeaponTrail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.AnimNotifyState_WeaponTrail");
    return result;
}
