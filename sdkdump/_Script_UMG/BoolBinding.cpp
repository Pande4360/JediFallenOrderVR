#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoolBinding.hpp"
#include "PropertyBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::BoolBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.BoolBinding");
    return result;
}
bool _Script_UMG::BoolBinding::GetValue() {
    return;
}
