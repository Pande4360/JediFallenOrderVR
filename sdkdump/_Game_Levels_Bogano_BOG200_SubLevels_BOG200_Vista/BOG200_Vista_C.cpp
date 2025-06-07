#include "..\FUObjectArray.hpp"
#include "BOG200_Vista_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Vista::BOG200_Vista_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG200/SubLevels/BOG200_Vista.BOG200_Vista_C");
    return result;
}
