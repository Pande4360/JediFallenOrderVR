#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "ComponentOverrideRecord.hpp"
void* _Script_Engine::ComponentOverrideRecord::get_ComponentClass() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ComponentOverrideRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentOverrideRecord");
    return result;
}
_Script_Engine::ActorComponent*& _Script_Engine::ComponentOverrideRecord::get_ComponentTemplate() {
    return *(_Script_Engine::ActorComponent**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ComponentOverrideRecord::get_ComponentKey() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ComponentOverrideRecord::get_CookedComponentInstancingData() {
    return (void*)((uintptr_t)this + 0x30);
}
