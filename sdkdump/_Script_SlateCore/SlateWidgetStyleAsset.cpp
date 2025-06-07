#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateWidgetStyleAsset.hpp"
#include "SlateWidgetStyleContainerBase.hpp"
_Script_SlateCore::SlateWidgetStyleContainerBase*& _Script_SlateCore::SlateWidgetStyleAsset::get_CustomStyle() {
    return *(_Script_SlateCore::SlateWidgetStyleContainerBase**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SlateCore::SlateWidgetStyleAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SlateCore.SlateWidgetStyleAsset");
    return result;
}
