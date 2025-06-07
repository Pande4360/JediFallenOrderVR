#include "..\FUObjectArray.hpp"
#include "BOG600_Col_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG600_SubLevels_BOG600_Col::BOG600_Col_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG600/SubLevels/BOG600_Col.BOG600_Col_C");
    return result;
}
