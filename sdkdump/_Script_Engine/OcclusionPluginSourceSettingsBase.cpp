#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OcclusionPluginSourceSettingsBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::OcclusionPluginSourceSettingsBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.OcclusionPluginSourceSettingsBase");
    return result;
}
