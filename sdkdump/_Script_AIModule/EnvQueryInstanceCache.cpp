#include "..\FUObjectArray.hpp"
#include "EnvQuery.hpp"
#include "EnvQueryInstanceCache.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::EnvQuery*& _Script_AIModule::EnvQueryInstanceCache::get_Template() {
    return *(_Script_AIModule::EnvQuery**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryInstanceCache::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvQueryInstanceCache");
    return result;
}
