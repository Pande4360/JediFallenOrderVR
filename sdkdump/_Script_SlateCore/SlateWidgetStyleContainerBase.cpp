#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateWidgetStyleContainerBase.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::SlateWidgetStyleContainerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SlateCore.SlateWidgetStyleContainerBase");
    return result;
}
