#include "..\FUObjectArray.hpp"
#include "BOG900_Vis_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Vis::BOG900_Vis_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG900/SubLevels/BOG900_Vis.BOG900_Vis_C");
    return result;
}
