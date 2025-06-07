#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisKeyDelegateBinding.hpp"
#include "InputVectorAxisDelegateBinding.hpp"
_Script_CoreUObject::Class* _Script_Engine::InputVectorAxisDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputVectorAxisDelegateBinding");
    return result;
}
