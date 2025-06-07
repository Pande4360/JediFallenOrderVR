#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BPVariableDescription.hpp"
void* _Script_Engine::BPVariableDescription::get_VarName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BPVariableDescription::get_VarGuid() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BPVariableDescription::get_VarType() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::BPVariableDescription::get_FriendlyName() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::BPVariableDescription::get_Category() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::BPVariableDescription::get_PropertyFlags() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::BPVariableDescription::get_RepNotifyFunc() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::BPVariableDescription::get_ReplicationCondition() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::BPVariableDescription::get_MetaDataArray() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::BPVariableDescription::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::BPVariableDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BPVariableDescription");
    return result;
}
