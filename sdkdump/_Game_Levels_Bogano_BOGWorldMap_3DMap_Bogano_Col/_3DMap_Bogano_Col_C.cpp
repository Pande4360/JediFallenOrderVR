#include "..\FUObjectArray.hpp"
#include "_3DMap_Bogano_Col_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOGWorldMap_3DMap_Bogano_Col::_3DMap_Bogano_Col_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOGWorldMap/3DMap_Bogano_Col.3DMap_Bogano_Col_C");
    return result;
}
