#include "..\FUObjectArray.hpp"
#include "BOG700_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG700_BOG700::BOG700_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG700/BOG700.BOG700_C");
    return result;
}
