#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SmartNameContainer.hpp"
_Script_CoreUObject::Class* _Script_Engine::SmartNameContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SmartNameContainer");
    return result;
}
