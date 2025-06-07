#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckInvestigateMode.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckInvestigateMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckInvestigateMode");
    return result;
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckInvestigateMode::get_InvestigateMode() {
    return (void*)((uintptr_t)this + 0x90);
}
