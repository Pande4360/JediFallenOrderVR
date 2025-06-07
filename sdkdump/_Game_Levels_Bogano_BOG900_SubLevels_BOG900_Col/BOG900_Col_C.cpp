#include "..\FUObjectArray.hpp"
#include "BOG900_Col_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
void* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Col::BOG900_Col_C::get_Door_Starting_Loc() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Col::BOG900_Col_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG900/SubLevels/BOG900_Col.BOG900_Col_C");
    return result;
}
