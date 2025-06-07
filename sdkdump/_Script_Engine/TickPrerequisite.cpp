#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TickPrerequisite.hpp"
_Script_CoreUObject::Class* _Script_Engine::TickPrerequisite::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TickPrerequisite");
    return result;
}
