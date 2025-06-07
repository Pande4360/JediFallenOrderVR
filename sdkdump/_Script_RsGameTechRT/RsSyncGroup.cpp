#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMasterSyncInstance.hpp"
#include "RsSyncGroup.hpp"
_Script_RsGameTechRT::RsMasterSyncInstance*& _Script_RsGameTechRT::RsSyncGroup::get_Master() {
    return *(_Script_RsGameTechRT::RsMasterSyncInstance**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSyncGroup::get_SlaveArray() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSyncGroup");
    return result;
}
