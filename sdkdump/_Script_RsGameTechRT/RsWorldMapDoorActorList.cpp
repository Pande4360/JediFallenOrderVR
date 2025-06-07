#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapDoorActorList.hpp"
void* _Script_RsGameTechRT::RsWorldMapDoorActorList::get_DoorActors() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapDoorActorList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsWorldMapDoorActorList");
    return result;
}
