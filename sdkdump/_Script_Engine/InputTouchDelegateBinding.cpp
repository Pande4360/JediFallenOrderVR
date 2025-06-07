#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputDelegateBinding.hpp"
#include "InputTouchDelegateBinding.hpp"
void* _Script_Engine::InputTouchDelegateBinding::get_InputTouchDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InputTouchDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputTouchDelegateBinding");
    return result;
}
