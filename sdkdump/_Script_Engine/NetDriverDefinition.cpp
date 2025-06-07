#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetDriverDefinition.hpp"
void* _Script_Engine::NetDriverDefinition::get_DefName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NetDriverDefinition::get_DriverClassName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::NetDriverDefinition::get_DriverClassNameFallback() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::NetDriverDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NetDriverDefinition");
    return result;
}
