#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeneralEngineSettings.hpp"
_Script_CoreUObject::Class* _Script_EngineSettings::GeneralEngineSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.GeneralEngineSettings");
    return result;
}
