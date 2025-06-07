#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedAnimRelevancyData.hpp"
void* _Script_Engine::CachedAnimRelevancyData::get_StateMachineName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CachedAnimRelevancyData::get_StateName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::CachedAnimRelevancyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedAnimRelevancyData");
    return result;
}
