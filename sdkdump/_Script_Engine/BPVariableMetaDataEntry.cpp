#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BPVariableMetaDataEntry.hpp"
_Script_CoreUObject::Class* _Script_Engine::BPVariableMetaDataEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BPVariableMetaDataEntry");
    return result;
}
void* _Script_Engine::BPVariableMetaDataEntry::get_DataKey() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BPVariableMetaDataEntry::get_DataValue() {
    return (void*)((uintptr_t)this + 0x8);
}
