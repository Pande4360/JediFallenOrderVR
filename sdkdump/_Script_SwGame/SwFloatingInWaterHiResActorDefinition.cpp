#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwFloatingInWaterHiResActorDefinition.hpp"
void* _Script_SwGame::SwFloatingInWaterHiResActorDefinition::get_HiResActorClass() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwFloatingInWaterHiResActorDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwFloatingInWaterHiResActorDefinition");
    return result;
}
