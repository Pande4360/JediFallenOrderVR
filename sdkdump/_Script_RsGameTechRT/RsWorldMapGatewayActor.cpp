#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "RsWorldMapActor.hpp"
#include "RsWorldMapGatewayActor.hpp"
void _Script_RsGameTechRT::RsWorldMapGatewayActor::set_bIsConnectedToSecreteArea(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsWorldMapGatewayActor::get_GatewayType() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Script_RsGameTechRT::RsWorldMapGatewayActor::get_bIsConnectedToSecreteArea() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsWorldMapGatewayActor::get_bOverrideSecretAreaVisibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsWorldMapGatewayActor::get_ConnectedSections() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Script_RsGameTechRT::RsWorldMapGatewayActor::set_bOverrideSecretAreaVisibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RsGameTechRT::RsWorldMapGatewayActor::get_ConnectedSectionsExplored() {
    return *(int32_t*)((uintptr_t)this + 0x374);
}
_Script_Engine::StaticMeshComponent*& _Script_RsGameTechRT::RsWorldMapGatewayActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapGatewayActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapGatewayActor");
    return result;
}
void* _Script_RsGameTechRT::RsWorldMapGatewayActor::GetConnectedSections() {
    return;
}
