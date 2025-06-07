#include "..\FUObjectArray.hpp"
#include "BOG500_Col_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
float& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Col::BOG500_Col_C::get_tunnelWaitTime() {
    return *(float*)((uintptr_t)this + 0x368);
}
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Col::BOG500_Col_C::get_TunnelFailTimer() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Col::BOG500_Col_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG500/SubLevels/BOG500_Col.BOG500_Col_C");
    return result;
}
