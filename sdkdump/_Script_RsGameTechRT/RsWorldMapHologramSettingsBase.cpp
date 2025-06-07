#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsWorldMapHologramSettingsBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapHologramSettingsBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapHologramSettingsBase");
    return result;
}
_Script_CoreUObject::LinearColor _Script_RsGameTechRT::RsWorldMapHologramSettingsBase::GetUnlockedDoorColor() {
    return;
}
_Script_CoreUObject::LinearColor _Script_RsGameTechRT::RsWorldMapHologramSettingsBase::GetUnlockableDoorColor() {
    return;
}
_Script_CoreUObject::LinearColor _Script_RsGameTechRT::RsWorldMapHologramSettingsBase::GetGatewayColor() {
    return;
}
_Script_CoreUObject::LinearColor _Script_RsGameTechRT::RsWorldMapHologramSettingsBase::GetLockedDoorColor() {
    return;
}
