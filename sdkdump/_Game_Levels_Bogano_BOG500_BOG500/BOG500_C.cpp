#include "..\FUObjectArray.hpp"
#include "BOG500_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
float& _Game_Levels_Bogano_BOG500_BOG500::BOG500_C::get_tunnelWaitTime() {
    return *(float*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG500_BOG500::BOG500_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG500/BOG500.BOG500_C");
    return result;
}
void* _Game_Levels_Bogano_BOG500_BOG500::BOG500_C::get_TunnelFailTimer() {
    return (void*)((uintptr_t)this + 0x370);
}
