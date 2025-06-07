#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapStaticMeshActorList.hpp"
void* _Script_RsGameTechRT::RsWorldMapStaticMeshActorList::get_StaticMeshActors() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStaticMeshActorList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsWorldMapStaticMeshActorList");
    return result;
}
