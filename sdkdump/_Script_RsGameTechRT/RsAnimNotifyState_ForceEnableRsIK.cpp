#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_ForceEnableRsIK.hpp"
void* _Script_RsGameTechRT::RsAnimNotifyState_ForceEnableRsIK::get_BonesToEnable() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAnimNotifyState_ForceEnableRsIK::get_Modifiers() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_ForceEnableRsIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_ForceEnableRsIK");
    return result;
}
