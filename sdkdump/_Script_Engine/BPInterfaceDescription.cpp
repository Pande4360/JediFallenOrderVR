#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BPInterfaceDescription.hpp"
void* _Script_Engine::BPInterfaceDescription::get_Interface() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BPInterfaceDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BPInterfaceDescription");
    return result;
}
void* _Script_Engine::BPInterfaceDescription::get_Graphs() {
    return (void*)((uintptr_t)this + 0x8);
}
