#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintComponentDelegateBinding.hpp"
void* _Script_Engine::BlueprintComponentDelegateBinding::get_ComponentPropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BlueprintComponentDelegateBinding::get_DelegatePropertyName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BlueprintComponentDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintComponentDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintComponentDelegateBinding");
    return result;
}
