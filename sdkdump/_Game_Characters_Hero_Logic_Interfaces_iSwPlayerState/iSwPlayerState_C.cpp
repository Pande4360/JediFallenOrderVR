#include "..\FUObjectArray.hpp"
#include "iSwPlayerState_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Interfaces_iSwPlayerState::iSwPlayerState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Interfaces/iSwPlayerState.iSwPlayerState_C");
    return result;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerState::iSwPlayerState_C::iRefillHealthPots() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerState::iSwPlayerState_C::iGetHealthMeterLevel(int32_t& HealthMeterLevel) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerState::iSwPlayerState_C::iSetRevengeXP(float XP) {
    return;
}
