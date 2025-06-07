#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputEvent.hpp"
#include "PointerEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::PointerEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.PointerEvent");
    return result;
}
