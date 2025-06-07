#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyBinding.hpp"
#include "VisibilityBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::VisibilityBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.VisibilityBinding");
    return result;
}
void* _Script_UMG::VisibilityBinding::GetValue() {
    return;
}
