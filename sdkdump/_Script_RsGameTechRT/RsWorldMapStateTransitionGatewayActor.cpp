#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMapSectionTag.hpp"
#include "RsWorldMapGatewayActor.hpp"
#include "RsWorldMapStateTransitionGatewayActor.hpp"
int32_t& _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor::get_CurrentState() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapStateTransitionGatewayActor");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor::ReceiveStateChanged(int32_t State) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
