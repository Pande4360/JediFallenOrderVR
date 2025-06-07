#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMapOfCollectableTypeToCollectableIdSet.hpp"
void* _Script_RsGameTechRT::RsMapOfCollectableTypeToCollectableIdSet::get_Map() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMapOfCollectableTypeToCollectableIdSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsMapOfCollectableTypeToCollectableIdSet");
    return result;
}
