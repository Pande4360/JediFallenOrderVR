#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnalogInputEvent.hpp"
#include "KeyEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::AnalogInputEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.AnalogInputEvent");
    return result;
}
