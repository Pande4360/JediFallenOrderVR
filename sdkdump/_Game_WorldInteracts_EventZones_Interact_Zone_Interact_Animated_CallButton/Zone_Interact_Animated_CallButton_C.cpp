#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "Zone_Interact_Animated_CallButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated_CallButton::Zone_Interact_Animated_CallButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Interact/Zone_Interact_Animated_CallButton.Zone_Interact_Animated_CallButton_C");
    return result;
}
