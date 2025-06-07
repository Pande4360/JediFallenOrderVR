#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Int32Binding.hpp"
#include "PropertyBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::Int32Binding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Int32Binding");
    return result;
}
int32_t _Script_UMG::Int32Binding::GetValue() {
    return;
}
