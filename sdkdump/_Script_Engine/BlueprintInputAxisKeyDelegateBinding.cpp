#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputAxisKeyDelegateBinding.hpp"
#include "BlueprintInputDelegateBinding.hpp"
void* _Script_Engine::BlueprintInputAxisKeyDelegateBinding::get_AxisKey() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BlueprintInputAxisKeyDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputAxisKeyDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputAxisKeyDelegateBinding");
    return result;
}
