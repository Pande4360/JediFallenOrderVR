#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_Investigate.hpp"
void* _Script_RsGameTechRT::RsBTService_Investigate::get_LastKnownLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTService_Investigate::get_InvestigateModeKey() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsBTService_Investigate::get_DistanceToRestartSearch() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_Investigate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_Investigate");
    return result;
}
