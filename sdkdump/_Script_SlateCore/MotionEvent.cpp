#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputEvent.hpp"
#include "MotionEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::MotionEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.MotionEvent");
    return result;
}
