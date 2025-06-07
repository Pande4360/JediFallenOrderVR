#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputDelegateBinding.hpp"
#include "BlueprintInputTouchDelegateBinding.hpp"
void* _Script_Engine::BlueprintInputTouchDelegateBinding::get_InputKeyEvent() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::BlueprintInputTouchDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputTouchDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputTouchDelegateBinding");
    return result;
}
