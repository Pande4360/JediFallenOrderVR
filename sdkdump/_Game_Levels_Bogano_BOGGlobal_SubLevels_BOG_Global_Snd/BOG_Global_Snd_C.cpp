#include "..\FUObjectArray.hpp"
#include "BOG_Global_Snd_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOGGlobal_SubLevels_BOG_Global_Snd::BOG_Global_Snd_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOGGlobal/SubLevels/BOG_Global_Snd.BOG_Global_Snd_C");
    return result;
}
