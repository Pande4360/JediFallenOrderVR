#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MouseCursorBinding.hpp"
#include "PropertyBinding.hpp"
void* _Script_UMG::MouseCursorBinding::GetValue() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::MouseCursorBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MouseCursorBinding");
    return result;
}
