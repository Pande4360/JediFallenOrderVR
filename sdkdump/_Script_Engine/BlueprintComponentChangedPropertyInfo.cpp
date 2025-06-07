#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Struct.hpp"
#include "BlueprintComponentChangedPropertyInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintComponentChangedPropertyInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintComponentChangedPropertyInfo");
    return result;
}
void* _Script_Engine::BlueprintComponentChangedPropertyInfo::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::BlueprintComponentChangedPropertyInfo::get_ArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Struct*& _Script_Engine::BlueprintComponentChangedPropertyInfo::get_PropertyScope() {
    return *(_Script_CoreUObject::Struct**)((uintptr_t)this + 0x10);
}
