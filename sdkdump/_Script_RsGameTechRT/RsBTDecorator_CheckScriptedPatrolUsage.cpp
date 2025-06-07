#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckScriptedPatrolUsage.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckScriptedPatrolUsage::get_PatrolPathUsage() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckScriptedPatrolUsage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckScriptedPatrolUsage");
    return result;
}
