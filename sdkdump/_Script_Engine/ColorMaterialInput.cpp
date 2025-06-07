#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ColorMaterialInput.hpp"
#include "MaterialInput.hpp"
_Script_CoreUObject::Class* _Script_Engine::ColorMaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ColorMaterialInput");
    return result;
}
