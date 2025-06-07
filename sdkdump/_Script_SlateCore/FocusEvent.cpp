#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FocusEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::FocusEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.FocusEvent");
    return result;
}
