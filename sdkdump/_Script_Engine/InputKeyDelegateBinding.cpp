#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputDelegateBinding.hpp"
#include "InputKeyDelegateBinding.hpp"
_Script_CoreUObject::Class* _Script_Engine::InputKeyDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputKeyDelegateBinding");
    return result;
}
void* _Script_Engine::InputKeyDelegateBinding::get_InputKeyDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
