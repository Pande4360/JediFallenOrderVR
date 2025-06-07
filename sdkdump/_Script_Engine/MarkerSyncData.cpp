#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MarkerSyncData.hpp"
void* _Script_Engine::MarkerSyncData::get_AuthoredSyncMarkers() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::MarkerSyncData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MarkerSyncData");
    return result;
}
