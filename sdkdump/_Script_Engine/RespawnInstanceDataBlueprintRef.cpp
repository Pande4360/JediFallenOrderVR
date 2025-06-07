#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RespawnInstanceDataBlueprintRef.hpp"
_Script_Engine::Actor*& _Script_Engine::RespawnInstanceDataBlueprintRef::get_InstanceDataOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::RespawnInstanceDataBlueprintRef::get_InstanceDataUID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RespawnInstanceDataBlueprintRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RespawnInstanceDataBlueprintRef");
    return result;
}
