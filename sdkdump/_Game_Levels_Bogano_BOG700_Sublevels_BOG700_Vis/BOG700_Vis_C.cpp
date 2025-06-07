#include "..\FUObjectArray.hpp"
#include "BOG700_Vis_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG700_Sublevels_BOG700_Vis::BOG700_Vis_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG700/Sublevels/BOG700_Vis.BOG700_Vis_C");
    return result;
}
