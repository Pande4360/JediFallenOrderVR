#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "RsWorldMapActor.hpp"
#include "RsWorldMapStaticMeshActor.hpp"
bool _Script_RsGameTechRT::RsWorldMapStaticMeshActor::get_bIsMapSectionActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsWorldMapStaticMeshActor::get_MeshType() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Script_RsGameTechRT::RsWorldMapStaticMeshActor::set_bIsMapSectionActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsWorldMapStaticMeshActor::get_MapSectionTag() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::StaticMeshComponent*& _Script_RsGameTechRT::RsWorldMapStaticMeshActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStaticMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapStaticMeshActor");
    return result;
}
