#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisKeyDelegateBinding.hpp"
#include "InputDelegateBinding.hpp"
void* _Script_Engine::InputAxisKeyDelegateBinding::get_InputAxisKeyDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InputAxisKeyDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputAxisKeyDelegateBinding");
    return result;
}
