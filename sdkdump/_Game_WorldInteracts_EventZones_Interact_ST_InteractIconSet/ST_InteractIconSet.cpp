#include "..\FUObjectArray.hpp"
#include "ST_InteractIconSet.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
_Script_Engine::Texture2D*& _Game_WorldInteracts_EventZones_Interact_ST_InteractIconSet::ST_InteractIconSet::get_HintIcon_5_321067C645858EBF5528C2A752841145() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
_Script_Engine::Texture2D*& _Game_WorldInteracts_EventZones_Interact_ST_InteractIconSet::ST_InteractIconSet::get_InteractIcon_6_A7193ED0437CAB3450D4B6A3CA61F73C() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_ST_InteractIconSet::ST_InteractIconSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/WorldInteracts/EventZones/Interact/ST_InteractIconSet.ST_InteractIconSet");
    return result;
}
