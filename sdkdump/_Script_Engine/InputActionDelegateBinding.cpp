#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputActionDelegateBinding.hpp"
#include "InputDelegateBinding.hpp"
void* _Script_Engine::InputActionDelegateBinding::get_InputActionDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InputActionDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputActionDelegateBinding");
    return result;
}
