#include "..\FUObjectArray.hpp"
#include "INT_LightsaberUser_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::GetLightsaber(_Script_Engine::Actor*& Lightsaber, _Script_Engine::Actor*& Lightsaber02) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_LightsaberUser.INT_LightsaberUser_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::SetLightsaberAttacksEnabled(bool NewEnabled, bool HideLightsaberWhileDisabled) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::SaberOn(bool Off, bool Instant, void* SaberToExtend) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::GetLightsaberType(void*& CurrentType) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::SaberAttach(bool hip) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::SetLightsaberType(void* NewType) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::SaberSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlight) {
    return;
}
void _Game_GlobalData_Interfaces_INT_LightsaberUser::INT_LightsaberUser_C::FanLightsaber(bool On) {
    return;
}
