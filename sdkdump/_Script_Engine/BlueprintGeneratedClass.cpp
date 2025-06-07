#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "BlueprintGeneratedClass.hpp"
#include "InheritableComponentHandler.hpp"
#include "SimpleConstructionScript.hpp"
int32_t& _Script_Engine::BlueprintGeneratedClass::get_NumReplicatedProperties() {
    return *(int32_t*)((uintptr_t)this + 0x210);
}
bool _Script_Engine::BlueprintGeneratedClass::get_bHasNativizedParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x214 + 0)) & 1 != 0;
}
_Script_Engine::InheritableComponentHandler*& _Script_Engine::BlueprintGeneratedClass::get_InheritableComponentHandler() {
    return *(_Script_Engine::InheritableComponentHandler**)((uintptr_t)this + 0x250);
}
void* _Script_Engine::BlueprintGeneratedClass::get_DynamicBindingObjects() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Script_Engine::BlueprintGeneratedClass::set_bHasNativizedParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x214 + 0);
    *(uint8_t*)((uintptr_t)this + 0x214 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SimpleConstructionScript*& _Script_Engine::BlueprintGeneratedClass::get_SimpleConstructionScript() {
    return *(_Script_Engine::SimpleConstructionScript**)((uintptr_t)this + 0x248);
}
void* _Script_Engine::BlueprintGeneratedClass::get_ComponentTemplates() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Engine::BlueprintGeneratedClass::get_Timelines() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Function*& _Script_Engine::BlueprintGeneratedClass::get_UberGraphFunction() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x258);
}
void* _Script_Engine::BlueprintGeneratedClass::get_CookedComponentInstancingData() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintGeneratedClass");
    return result;
}
