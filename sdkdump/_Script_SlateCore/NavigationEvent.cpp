#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputEvent.hpp"
#include "NavigationEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::NavigationEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.NavigationEvent");
    return result;
}
