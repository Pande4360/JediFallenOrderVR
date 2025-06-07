#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassLightSettings.hpp"
#include "LightmassPointLightSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightmassPointLightSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassPointLightSettings");
    return result;
}
