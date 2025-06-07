#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "RsAnimNotify_SetCombatState.hpp"
void* _Script_RsGameTechRT::RsAnimNotify_SetCombatState::get_CombatState() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_SetCombatState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_SetCombatState");
    return result;
}
