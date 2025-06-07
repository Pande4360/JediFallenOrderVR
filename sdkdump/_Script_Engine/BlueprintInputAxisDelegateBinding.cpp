#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputAxisDelegateBinding.hpp"
#include "BlueprintInputDelegateBinding.hpp"
void* _Script_Engine::BlueprintInputAxisDelegateBinding::get_InputAxisName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BlueprintInputAxisDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputAxisDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputAxisDelegateBinding");
    return result;
}
