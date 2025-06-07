#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInput.hpp"
#include "Vector2MaterialInput.hpp"
_Script_CoreUObject::Class* _Script_Engine::Vector2MaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Vector2MaterialInput");
    return result;
}
