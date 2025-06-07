#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyBinding.hpp"
#include "Widget.hpp"
#include "WidgetBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetBinding");
    return result;
}
_Script_UMG::Widget* _Script_UMG::WidgetBinding::GetValue() {
    return;
}
