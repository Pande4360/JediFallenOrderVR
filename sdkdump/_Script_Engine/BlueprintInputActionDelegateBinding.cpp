#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputActionDelegateBinding.hpp"
#include "BlueprintInputDelegateBinding.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputActionDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputActionDelegateBinding");
    return result;
}
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_InputKeyEvent() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_InputActionName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x18);
}
