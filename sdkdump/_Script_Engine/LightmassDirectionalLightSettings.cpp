#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassDirectionalLightSettings.hpp"
#include "LightmassLightSettings.hpp"
float& _Script_Engine::LightmassDirectionalLightSettings::get_LightSourceAngle() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassDirectionalLightSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassDirectionalLightSettings");
    return result;
}
