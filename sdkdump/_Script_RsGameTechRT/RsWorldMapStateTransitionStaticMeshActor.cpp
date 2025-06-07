#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMapSectionTag.hpp"
#include "RsWorldMapStateTransitionStaticMeshActor.hpp"
#include "RsWorldMapStaticMeshActor.hpp"
void _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshActor::ReceiveStateChanged(int32_t State) {
    return;
}
int32_t& _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshActor::get_CurrentState() {
    return *(int32_t*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapStateTransitionStaticMeshActor");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshActor::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
