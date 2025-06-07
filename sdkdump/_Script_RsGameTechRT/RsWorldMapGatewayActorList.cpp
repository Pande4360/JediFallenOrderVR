#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapGatewayActorList.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapGatewayActorList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsWorldMapGatewayActorList");
    return result;
}
void* _Script_RsGameTechRT::RsWorldMapGatewayActorList::get_GatewayActors() {
    return (void*)((uintptr_t)this + 0x0);
}
