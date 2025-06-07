#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CaptureLostEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::CaptureLostEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CaptureLostEvent");
    return result;
}
