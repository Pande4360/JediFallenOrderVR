#include "..\FUObjectArray.hpp"
#include "BOG100_Lights_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG100_SubLevels_BOG100_Lights::BOG100_Lights_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG100/SubLevels/BOG100_Lights.BOG100_Lights_C");
    return result;
}
