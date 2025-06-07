#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "NamedSlot.hpp"
_Script_CoreUObject::Class* _Script_UMG::NamedSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.NamedSlot");
    return result;
}
