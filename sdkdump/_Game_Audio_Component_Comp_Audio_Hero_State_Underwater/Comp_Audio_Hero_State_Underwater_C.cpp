#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Hero_State_Underwater_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Hero_State_Underwater::Comp_Audio_Hero_State_Underwater_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Hero_State_Underwater.Comp_Audio_Hero_State_Underwater_C");
    return result;
}
