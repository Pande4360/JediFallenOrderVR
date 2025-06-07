#include "..\FUObjectArray.hpp"
#include "EnvQuery.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
void* _Script_AIModule::EnvQuery::get_QueryName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::EnvQuery::get_Options() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQuery");
    return result;
}
