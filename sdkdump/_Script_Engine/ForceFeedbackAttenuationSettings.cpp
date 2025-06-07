#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseAttenuationSettings.hpp"
#include "ForceFeedbackAttenuationSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackAttenuationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ForceFeedbackAttenuationSettings");
    return result;
}
