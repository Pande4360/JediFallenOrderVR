#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SmartNameMapping.hpp"
_Script_CoreUObject::Class* _Script_Engine::SmartNameMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SmartNameMapping");
    return result;
}
