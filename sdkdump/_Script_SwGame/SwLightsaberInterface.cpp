#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "SwLightsaberBladeState.hpp"
#include "SwLightsaberInterface.hpp"
void _Script_SwGame::SwLightsaberInterface::OverchargeEffect(bool bStart, bool bActivate) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwLightsaberInterface");
    return result;
}
void _Script_SwGame::SwLightsaberInterface::SetLightsaberMarksState(bool bEnabled) {
    return;
}
bool _Script_SwGame::SwLightsaberInterface::IsBladeExtended() {
    return;
}
_Script_SwGame::SwLightsaberBladeState _Script_SwGame::SwLightsaberInterface::GetBladeState() {
    return;
}
bool _Script_SwGame::SwLightsaberInterface::CanBeForcePulledByCharacter(_Script_RsGameTechRT::RsCharacter* PullingCharacter) {
    return;
}
void _Script_SwGame::SwLightsaberInterface::ExtendRetractBlade(bool bExtend, bool bInstant) {
    return;
}
void _Script_SwGame::SwLightsaberInterface::CatchLightsaber(_Script_RsGameTechRT::RsCharacter* CatchingCharacter) {
    return;
}
