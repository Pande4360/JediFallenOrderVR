#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComponentKey.hpp"
void* _Script_Engine::ComponentKey::get_OwnerClass() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ComponentKey::get_SCSVariableName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ComponentKey::get_AssociatedGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ComponentKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentKey");
    return result;
}
