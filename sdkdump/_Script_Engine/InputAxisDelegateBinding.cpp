#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisDelegateBinding.hpp"
#include "InputDelegateBinding.hpp"
void* _Script_Engine::InputAxisDelegateBinding::get_InputAxisDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InputAxisDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputAxisDelegateBinding");
    return result;
}
