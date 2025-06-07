#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticParameterSet.hpp"
void* _Script_Engine::StaticParameterSet::get_StaticSwitchParameters() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StaticParameterSet::get_StaticComponentMaskParameters() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::StaticParameterSet::get_TerrainLayerWeightParameters() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::StaticParameterSet::get_MaterialLayersParameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::StaticParameterSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticParameterSet");
    return result;
}
