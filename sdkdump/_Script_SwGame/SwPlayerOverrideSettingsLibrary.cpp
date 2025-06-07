#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
#include "SwPlayerOverrideSettingsLibrary.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerOverrideSettingsLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerOverrideSettingsLibrary");
    return result;
}
_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags _Script_SwGame::SwPlayerOverrideSettingsLibrary::GetOverrideHeroUpgradeFlags() {
    return;
}
_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags _Script_SwGame::SwPlayerOverrideSettingsLibrary::GetOverrideHeroLoadoutFlags() {
    return;
}
