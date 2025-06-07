#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_SetInvestigateMode.hpp"
void* _Script_RsGameTechRT::RsBTTask_SetInvestigateMode::get_InvestigateModeKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTTask_SetInvestigateMode::get_InvestigateMode() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_SetInvestigateMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_SetInvestigateMode");
    return result;
}
