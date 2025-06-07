#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Widget.hpp"
#include "WidgetTree.hpp"
_Script_UMG::Widget*& _Script_UMG::WidgetTree::get_RootWidget() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetTree");
    return result;
}
