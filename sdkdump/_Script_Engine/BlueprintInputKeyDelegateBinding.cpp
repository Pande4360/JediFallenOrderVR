#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputDelegateBinding.hpp"
#include "BlueprintInputKeyDelegateBinding.hpp"
void* _Script_Engine::BlueprintInputKeyDelegateBinding::get_InputChord() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BlueprintInputKeyDelegateBinding::get_InputKeyEvent() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BlueprintInputKeyDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputKeyDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputKeyDelegateBinding");
    return result;
}
