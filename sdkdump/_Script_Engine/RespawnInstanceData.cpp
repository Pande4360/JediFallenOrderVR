#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RespawnInstanceData.hpp"
int32_t& _Script_Engine::RespawnInstanceData::get_InstanceDataUID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::RespawnInstanceData::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::RespawnInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RespawnInstanceData");
    return result;
}
void* _Script_Engine::RespawnInstanceData::get_Location() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::RespawnInstanceData::get_Rotation() {
    return (void*)((uintptr_t)this + 0x24);
}
