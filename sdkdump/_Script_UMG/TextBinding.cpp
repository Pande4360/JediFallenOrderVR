#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyBinding.hpp"
#include "TextBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::TextBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TextBinding");
    return result;
}
void* _Script_UMG::TextBinding::GetTextValue() {
    return;
}
void* _Script_UMG::TextBinding::GetStringValue() {
    return;
}
