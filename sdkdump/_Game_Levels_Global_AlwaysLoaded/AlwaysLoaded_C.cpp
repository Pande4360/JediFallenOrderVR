#include "..\FUObjectArray.hpp"
#include "AlwaysLoaded_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Global_AlwaysLoaded::AlwaysLoaded_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Global/AlwaysLoaded.AlwaysLoaded_C");
    return result;
}
