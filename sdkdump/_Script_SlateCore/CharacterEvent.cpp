#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CharacterEvent.hpp"
#include "InputEvent.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::CharacterEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CharacterEvent");
    return result;
}
