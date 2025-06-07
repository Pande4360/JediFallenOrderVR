#include "..\FUObjectArray.hpp"
#include "iHero_Rumble_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ForceFeedbackEffect.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Interfaces_iHero_Rumble::iHero_Rumble_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Interfaces/iHero_Rumble.iHero_Rumble_C");
    return result;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Rumble::iHero_Rumble_C::RumbleFeedback(_Script_Engine::ForceFeedbackEffect* Force_Feedback) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Rumble::iHero_Rumble_C::RadialRumble(float Intensity, float Duration, _Script_CoreUObject::Vector Loc) {
    return;
}
