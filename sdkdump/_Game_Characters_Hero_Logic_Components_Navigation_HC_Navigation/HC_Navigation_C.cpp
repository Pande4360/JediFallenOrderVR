#include "..\FUObjectArray.hpp"
#include "HC_Navigation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterNavigationManagementComponent.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation::HC_Navigation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Navigation.HC_Navigation_C");
    return result;
}
