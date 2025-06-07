#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\PostProcessSettings.hpp"
#include "RsPostProcessSettingsDefinition.hpp"
void* _Script_RsGameTechRT::RsPostProcessSettingsDefinition::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPostProcessSettingsDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPostProcessSettingsDefinition");
    return result;
}
_Script_Engine::PostProcessSettings _Script_RsGameTechRT::RsPostProcessSettingsDefinition::GetPostProcessSettings() {
    return;
}
