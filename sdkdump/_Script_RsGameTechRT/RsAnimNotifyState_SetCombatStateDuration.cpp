#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
#include "RsAnimNotifyState_SetCombatStateDuration.hpp"
void* _Script_RsGameTechRT::RsAnimNotifyState_SetCombatStateDuration::get_CombatState() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsAnimNotifyState_SetCombatStateDuration::get_EndingCombatState() {
    return (void*)((uintptr_t)this + 0x79);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_SetCombatStateDuration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_SetCombatStateDuration");
    return result;
}
