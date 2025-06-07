#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPostProcessEffectData.hpp"
#include "RsPostProcessSettingsDefinition.hpp"
_Script_RsGameTechRT::RsPostProcessSettingsDefinition*& _Script_RsGameTechRT::RsPostProcessEffectData::get_PostProcessSettingsDefinition() {
    return *(_Script_RsGameTechRT::RsPostProcessSettingsDefinition**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPostProcessEffectData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPostProcessEffectData");
    return result;
}
